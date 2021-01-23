import java.util.*;
public class LongestUncommonSubsequence {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine(), b = sc.nextLine();
        sc.close();
        if(a.length() > b.length()) System.out.print(a.length() + "");
        if(a.length() < b.length()) System.out.print(b.length() + "");
        if(a.length() == b.length()) {
            if(a.equals(b)) System.out.print("-1");
            if(!a.equals(b)) System.out.print(a.length() + "");
        }
    }
}