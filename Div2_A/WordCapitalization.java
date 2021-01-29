import java.util.Scanner;
public class WordCapitalization {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        sc.close();
        char c = s.charAt(0);
        if(c >= 97 && c <= 122) {
            char result = (char)(c - 'a' + 'A');
            if(s.length() == 1) {
                System.out.print(String.valueOf(result));
            } else {
                System.out.print(String.valueOf(result) + s.substring(1));
            }
        } else {
            System.out.print(s);
        }
    }
}
