import java.util.*;
public class Magnets {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), count = 0;
        sc.nextLine();
        String s = sc.nextLine();
        n--;
        count++;
        while(n > 0) {
            String ss = sc.nextLine();
            n--;
            if(!s.equals(ss)) {
                count++;
                s = ss;
            }
        }
        System.out.printf(count + "");
    }
}