import java.util.Scanner;
public class PanScales {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine(), s2 = sc.nextLine();
        sc.close();
        int total = s1.length() + s2.length() - 1;
        if(total % 2 == 0) {
            int half = total / 2, index = s1.indexOf("|"), l = index, r = s1.length() - 1 - index;
            if(half - l >= 0 && half - r >= 0) {
                System.out.print(s2.substring(0, half - l) + s1 + s2.substring(half -l));
                return ;
            }
        }
        System.out.print("Impossible");
    }
}