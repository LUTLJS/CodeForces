import java.util.*;
public class Pangram {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if(n < 26) {
            System.out.print("NO");
            sc.close();
            return ;
        }
        sc.nextLine();
        String s = sc.nextLine();
        sc.close();
        Set<Character> hSet = new HashSet<>();
        for(int i = 0; i < n; i++) {
            char c = s.charAt(i);
            if(c >= 65 && c <= 90) {
                c -= 'A' - 'a';
            }
            hSet.add(c);
            if(hSet.size() == 26) {
                System.out.print("YES");
                return ;
            }
        }
        System.out.print("NO");
    }
}