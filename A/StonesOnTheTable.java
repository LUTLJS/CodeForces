import java.util.*;
public class StonesOnTheTable {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        String s = sc.nextLine();
        sc.close();
        char ct = s.charAt(0);
        String temp = String.valueOf(ct);
        for(int i = 1; i < s.length(); i++) {
            char c = s.charAt(i);
            if(ct != c) {
                temp += String.valueOf(c);
                ct = c;
            }
        }
        System.out.print(n - temp.length() + "");
    }
}