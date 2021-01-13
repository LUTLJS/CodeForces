import java.util.*;
public class Word {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.nextLine();
        int nU = 0, nL = 0, len = word.length();
        for(int i = 0; i < len; i++) {
            if(word.charAt(i) <= 90) {
                nU++;
            } else {
                nL++;
            }
        }
        if(nU > nL) {
            for(int i = 0; i < len; i++) {
                char c = word.charAt(i);
                if(c >= 97) {
                    print((char) (c - 'a' + 'A'));
                } else {
                    print(c);
                }
            }
        } else { 
            for(int i = 0; i < len; i++) {
                char c = word.charAt(i);
                if(c >= 97) {
                    print(c);
                } else {
                    print((char) (c -'A' + 'a'));
                }
            }
        }
    }
    private static void print(char c) {
        System.out.print(String.valueOf(c));
    }
}
