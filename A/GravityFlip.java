import java.util.*;
public class GravityFlip {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        while(n > 0) {
            int num = sc.nextInt();
            if(n == a.length) {
                a[0] = num;
            } else {
                for(int i = a.length - n - 1; i >= 0; i-- ) {
                    if(num < a[i]) {
                        int temp = a[i];
                        a[i] = num;
                        a[i + 1] = temp;
                    } else {
                        a[i + 1] = num;
                        break;
                    }
                }
            }
            n--;
        }
        sc.close();
        for(int i = 0; i < a.length; i++) 
            System.out.print(a[i] + " ");
    }
}