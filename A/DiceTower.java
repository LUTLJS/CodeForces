import java.util.Scanner;
public class DiceTower {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        sc.nextLine();
        int top = sc.nextInt();
        while(sc.hasNextInt()) {
            int a = sc.nextInt(), b = sc.nextInt();
            if(a == top || a == 7 - top || b == top || b == 7 - top) {
                sc.close();
                System.out.print("NO");
                return ;
            }
        }
        sc.close();
        System.out.print("YES");
    }
}