import java.util.*;
public class FreeIceCream {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), count = 0;
        long x = sc.nextInt();
        while(n > 0) {
            n--;
            String t = sc.next();
            long d = sc.nextInt();
            if(t.equals("+")) {
                x += d;
            } else {
                if(x >= d) {
                    x -= d;
                } else {
                    count++;
                }
            }
        }
        sc.close();
        System.out.print(x + " " + count);
    }
}