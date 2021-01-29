import java.util.*;
public class KuriyamaMiraiStones {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), index = 0;
        int[] a = new int[n];
        List<Integer> b = new ArrayList<>();
        while(index < n) {
            a[index] = sc.nextInt();
            b.add(a[index]);
            index++;
        }
        Collections.sort(b);
        int m = sc.nextInt();
        while(sc.hasNextInt()) {
            int type = sc.nextInt();
            int l = sc.nextInt(), r = sc.nextInt();
            long sum = 0;
            if(type == 1) {
                for(int i = l - 1; i <= r - 1; i++) {
                    sum += a[i];
                }
            } else {
                for(int i = l - 1; i <= r - 1; i++) {
                    sum += b.get(i);
                }
            }
            if(sc.hasNextInt()) {
                System.out.println(sum + "");
            } else {
                System.out.print(sum + "");
            }
        }
        sc.close();
    }
}
