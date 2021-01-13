import java.util.*;
public class NightAtTheMuseum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        char p = 'a';
        int count = 0;
        for(int i = 0; i < s.length(); i++) {
            char curr = s.charAt(i);
            int dif = Math.abs(p - curr);
            if(dif <= 13) {
                count += dif;
            } else {
                count += 26 - dif;
            }
            p = curr;
        }
        System.out.print(count + "");
    }
}