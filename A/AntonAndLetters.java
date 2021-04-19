import java.util.*;

public class AntonAndLetters {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        sc.close();

        // no letters
        if(s.length() == 2) {
            System.out.print("0");
            return ;
        }

        // has at least one letter
        char[] a = new char[s.length() / 3];
        int len = a.length;
        for(int i = 1, j = 0; j < len; i += 3, j++) {
            a[j] = s.charAt(i);
        }
        int count = a.length;
        for(int i = 0; i < len - 1; i++) {
            if(a[i] == '0') continue;
            for(int j = i + 1; j < len; j++) {
                if(a[i] == a[j]) {
                    count--;
                    a[j] = '0';
                }
            }
        }
        System.out.print(count + "");
    }
}
