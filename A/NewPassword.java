import java.util.*;
public class NewPassword {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt();
        sc.close();
        String s = "";
        for(int i = 97; i < 97 + k; i++) {
            s += String.valueOf((char)i);
        }
        if(k == n) System.out.print(s);
        if(k > n) System.out.print(s.substring(0, n));
        if(k < n) {
            int quotient = n / k, remainder = n % k;
            String string = "";
            for(int i = 0; i < quotient; i++) {
                string += s;
            }
            string += s.substring(0, remainder);
            System.out.print(string);
        }
    
    }
}