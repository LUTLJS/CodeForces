import java.util.Scanner;
public class KDivisibleSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(sc.hasNextInt()) {
            int n = sc.nextInt(), k = sc.nextInt();
            while(true) {
                if(n > k) {
                    int e = n / k, r = n % k;
                    if(r == 0) k = n;
                    if(r != 0) k = (e + 1) * k;
                } else if(n == k) {
                    if(sc.hasNextInt()) {
                        System.out.println("1");
                        break ;
                    } else {
                        System.out.print("1");
                        sc.close();
                        return ;
                    }
                } else {
                    int e = k / n, r = k % n, result = 0;
                    if(r == 0) result = e;
                    if(r != 0) result = e + 1;
                    if(sc.hasNextInt()) {
                        System.out.println(result + "");
                        break ;
                    } else {
                        System.out.print(result + "");
                        sc.close();
                        return ;
                    }
                }
            }
        }
        sc.close();
    }
}
