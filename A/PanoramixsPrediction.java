import java.util.*;
public class PanoramixsPrediction {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt();
        sc.close();
        if(m - n > 6) {
            System.out.print("NO");
        } else {
            // determine whether n + 1 to m - 1 are prime numbers
            for(int i = n + 1; i <= m -1; i++) {
                // determine if i is prime number
                boolean isPrime = true;
                for(int j = 2; j <= (int)Math.sqrt(i); j++) {
                    if(i % j == 0) {
                        isPrime = false;
                        break;
                    }
                }
                if(isPrime) {
                    System.out.print("NO");
                    return ;
                }
            }
            // determine whether m is prime
            for(int j = 2; j <= (int)Math.sqrt(m); j++) {
                if(m % j == 0) {
                    System.out.print("NO");
                    return ;
                }
            }
            System.out.print("YES");
        }
    }
}