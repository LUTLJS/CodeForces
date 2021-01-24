import java.util.*;
public class CalculatingFunction {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        sc.close();
        if(n % 2 == 0) {
            System.out.print(n / 2 + "");
        } else {
            System.out.print(- ((n + 1) / 2) + "");
        }
    }
}