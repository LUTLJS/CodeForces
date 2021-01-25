import java.util.*;
public class BlackSquare {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] a = new int[4];
        for(int i = 0; i < 4; i++) {
            a[i] = sc.nextInt();
        }
        sc.nextLine();
        String s = sc.nextLine();
        sc.close();
        int sum = 0;
        for(int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if(c == '1') {
                sum += a[0];
            } else if(c == '2') {
                sum += a[1];
            } else if(c == '3') {
                sum += a[2];
            } else {
                sum += a[3];
            }
        }
        System.out.print(sum + "");
    }
}