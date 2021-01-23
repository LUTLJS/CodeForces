import java.util.*;
public class ColorfulStonesSimplified {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine(), t = sc.nextLine();
        int liss = 0;
        for(int i = 0; i < t.length(); i++) {
            if(s.charAt(liss) == t.charAt(i)) liss++;
        }
        System.out.print(liss + 1 + "");
    }
}