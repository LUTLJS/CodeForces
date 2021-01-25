import java.util.*;
public class Games {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = 2 * sc.nextInt();
        int[] a = new int[n];
        while(n > 0) {
            a[--n] = sc.nextInt();
        }
        sc.close();
        int count = 0;
        for(int i = 0; i < a.length - 2; i += 2) {
            for(int j = i + 2; j < a.length - 1; j += 2) {
                if(a[i] == a[j + 1]) count++;
                if(a[i + 1] == a[j]) count++;
            }
        }
        System.out.print(count + "");
    }
}