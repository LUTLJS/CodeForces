import java.util.*;
public class TheatreSquare {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong(), m = sc.nextLong(), a = sc.nextLong();
        sc.close();
        long r1 = n % a, r2 = m % a, x = n / a, y = m / a;
        if(r1 == 0 && r2 == 0) {
            System.out.print(x * y + "");
        } else if(r1 != 0 && r2 != 0) {
            System.out.print((x + 1) * (y + 1) + "");
        } else if(r1 != 0 && r2 == 0) {
            System.out.print((x + 1) * y + "");
        } else {
            System.out.print(x * (y + 1) + "");
        }
    }
}