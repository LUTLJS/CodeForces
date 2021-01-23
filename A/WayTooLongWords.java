import java.util.*;
public class WayTooLongWords {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        while(n > 0) {
            n--;
            String s = sc.nextLine();
            int len = s.length();
            if(len <= 10) {
                System.out.println(s);
            } 
            if(len > 10) {
                if(n == 0) {
                    System.out.print(String.valueOf(s.charAt(0)) + 
                                   (len - 2) + 
                                   String.valueOf(s.charAt(len - 1)));
                } else {
                    System.out.println(String.valueOf(s.charAt(0)) + 
                                   (len - 2) + 
                                   String.valueOf(s.charAt(len - 1)));
                }
            }
        }
        sc.close();
    }
}