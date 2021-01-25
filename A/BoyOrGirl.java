import java.util.*;
public class BoyOrGirl {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        sc.close();
        int n = s.length();
        while(s.length() != 0) {
            char c = s.charAt(0);
            String temp = "";
            for(int i = 1; i< s.length(); i++) {
                char cc = s.charAt(i);
                if(c != cc) temp += String.valueOf(cc);
                if(c == cc) n--;
            }
            s = temp;
        }
        if(n % 2 == 1) System.out.printf("IGNORE HIM!");
        if(n % 2 == 0) System.out.printf("CHAT WITH HER!");       
    }
}