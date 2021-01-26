import java.util.*;
public class IQTest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine() + sc.nextLine() + sc.nextLine() + sc.nextLine();
        sc.close();
        for(int i = 0; i < 11; i++) {
            if(i != 3 && i != 7) {
                char a = s.charAt(i), b = s.charAt(i + 1), c = s.charAt(i + 4), d = s.charAt(i + 5);
                if((a == b && b == c && c == d) || 
                   (a == b && b == c && c != d) ||
                   (a != b && b == c && c == d) ||
                   (a == c && c == d && d != b) ||
                   (a == d && d == b && b != c)) {
                   System.out.print("YES");
                   return ;
                } 
            }
        }
        System.out.print("NO");
    }
}