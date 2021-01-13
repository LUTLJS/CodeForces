import java.util.*;
public class PetyaAndStrings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine(), b = sc.nextLine();
        for(int i = 0; i < a.length(); i++) {
            char ca = a.charAt(i);
            char cb = b.charAt(i);   
            if(ca <= 90 && cb >= 97) cb -= 'a' - 'A';
            if(ca >= 97 && cb <= 90) ca -= 'a' - 'A';
            if(ca < cb) {
                System.out.printf("-1");
                return ;
            }
            if(ca > cb) {
                System.out.printf("1");
                return ;
            }
        }
        System.out.printf("0");
    }
}