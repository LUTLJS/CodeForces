import java.util.*;
public class ValeraAndX {
    public static void main(String[] args) {
        String[] original = getInput();
        if(original.length != 0) examineThreeParts(original, original[0].length());
    }
    private static String[] getInput() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        String s = sc.nextLine();
        if(s.charAt(0) == s.charAt(1)) {
            sc.close();
            System.out.print("NO");
            return new String[0];
        }
        String[] original = new String[n];
        original[0] = s;
        int index = 1;
        while(sc.hasNextLine()) {
            original[index] = sc.nextLine();
            index++;
        }
        sc.close();
        return original;
    }
    
    private static void examineThreeParts(String[] original, int n) {
        char x = original[0].charAt(0), y = original[0].charAt(1);
        // the first n / 2 - 1 strings to be examined
        for(int i = 0, j = n - 1; i != j; i++, j--) 
            if(!examineOneString(original[i], i, j, x, y)) return ;
        // the middle string to be examined
        for(int i = 0; i < n; i++) {
            char c =  original[n / 2].charAt(i);
            if(i == n / 2) {
                if( c != x) {
                    System.out.print("NO");
                    return ;
                }
            } else {
                if(c != y) {
                    System.out.print("NO");
                    return ;
                }
            }
        }
        // the last n / 2 - 1 strings to be examined
        for(int i = n / 2 - 1, j = n / 2 + 1; i >= 0; i--, j++) 
            if(!examineOneString(original[j], i, j, x, y)) return ;
        // all clear
        System.out.print("YES");
    }
    private static boolean examineOneString(String string, int i, int j, char x, char y) {
        for(int k = 0; k < string.length(); k++) {
            char c = string.charAt(k);
            if(k == i || k == j) {
                if(c != x) {
                    System.out.print("NO");
                    return false;
                }
            } else {
                if(c != y) {
                    System.out.print("NO");
                    return false;
                }
            }
        }
        return true;
    }
}