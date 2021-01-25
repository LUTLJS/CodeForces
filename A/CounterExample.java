import java.util.*;
public class CounterExample {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long l = sc.nextLong(), r = sc.nextLong();
        sc.close();
        if(r - l < 2 || (r - l == 2 && l % 2 == 1)) {
            System.out.print("-1");
            return ;
        }
        if(r - l >= 2 && l % 2 == 0) {
            System.out.print(l + " " + (l + 1) + " " + (l + 2));
        } else {
            System.out.print((l + 1) + " " + (l + 2) + " " + (l + 3));
        }  
    }
}