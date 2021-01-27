import java.util.*;
public class YaroslavAndPermutaions {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), index = 0;
        int[] a = new int[n];
        while(sc.hasNextInt()) {
            a[index] = sc.nextInt();
            index++;
        }
        sc.close();
        Map<Integer, Integer> map = new HashMap<>();
        for(int i = 0; i < n; i++) {
            if(map.containsKey(a[i])) {
                int old = map.get(a[i]);
                map.put(a[i], old + 1);
            } else {
                map.put(a[i], 1);
            }
        }
        Set<Integer> keys = map.keySet();
        Iterator<Integer> it = keys.iterator();
        int max = 0;
        while(it.hasNext()) {
            int value = map.get(it.next());
            max = value > max ? value : max; 
        }
        if(n % 2 == 0) {
            if(max >= (n / 2) + 1) {
                System.out.print("NO");
            } else {
                System.out.print("YES");
            }
        } else {
            if(max >= (n + 1) / 2 + 1) {
                System.out.print("NO");
            } else {
                System.out.print("YES");
            }
        }
    }
}