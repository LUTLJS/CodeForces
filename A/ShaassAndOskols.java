import java.util.*;
public class ShaassAndOskols {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), i = 0;
        int[] a = new int[n];
        while(i < n) {
            a[i] = sc.nextInt();
            i++;
        }
        int m = sc.nextInt();
        if(n == 1 && m != 0) {
            System.out.print("0");
            sc.close();
            return ;
        }
        
        while(m > 0) {
            int x = sc.nextInt(), y = sc.nextInt();
            if(x == 1) {
                a[1] += a[0] - y;    
                a[0] = 0;
            } else if(x == n) {
                a[x - 2] += y -1;
                a[x - 1] = 0;  
            } else {
                a[x - 2] += y - 1;
                a[x] += a[x - 1] - y;
                a[x - 1] = 0;
            }
            m--;
        }
        sc.close();
        for(int j = 0; j < n; j++) {
            if(j != n - 1) {
                System.out.print(a[j] + "\n");
            } else {
                System.out.print(a[j] + "");
            }
        }
    }
}