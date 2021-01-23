import java.util.*;
public class CarrotCakes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), t = sc.nextInt(), k = sc.nextInt(), d = sc.nextInt();
        if((d / t + 1) * k < n) {
            System.out.print("YES");
        } else {
            System.out.print("NO");
        }
    }
}