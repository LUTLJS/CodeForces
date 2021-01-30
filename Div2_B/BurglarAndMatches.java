import java.util.*;
public class BearAndFindingCriminals {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt();
        Map<Integer, Integer> map = new HashMap<>();
        List<Integer> arr = new ArrayList<>();
        while(sc.hasNextInt()) {
            int a = sc.nextInt(), b = sc.nextInt();
            if(map.containsKey(b)) {
                a += map.get(b);
            } else { arr.add(b);}
            map.put(b, a);
        }
        sc.close();
        Collections.sort(arr);
        int sum = 0;
        for(int i = arr.size() - 1; i >= 0; i--) {
            int amount = arr.get(i), matchboxes = map.get(amount);
            if(n <= matchboxes) {
                System.out.print(n * amount + sum + "");
                return ;
            } else {
                sum += amount * matchboxes;
                n -= matchboxes;
            }
        }
        System.out.print(sum + "");
    }
}
