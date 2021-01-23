import java.util.*;
public class HelpfulMaths {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine(), s1 = "", s2 = "", s3 = "";
        sc.close();
        int len = s.length();
        if(len == 1) {
            System.out.print(s);
            return ;
        }
        for(int i = 0; i < len; i += 2) {
            char c = s.charAt(i);
            if(c == '1') s1 += "1+";
            if(c == '2') s2 += "2+";
            if(c == '3') s3 += "3+";
        }
        System.out.print((s1 + s2 + s3).substring(0, len));
    }
}