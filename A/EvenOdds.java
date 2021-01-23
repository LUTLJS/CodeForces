import java.util.*;
public class EvenOdds {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong(), k = sc.nextLong(), oddCount = (n + 1) / 2;
        sc.close(); 
        if(k <= (n + 1) / 2) {
            System.out.print(2 * k - 1 + "");
        } else {
            System.out.print(2 * (k - oddCount) + "");
        }
    }
}