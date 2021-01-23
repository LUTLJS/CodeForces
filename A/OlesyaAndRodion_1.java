import java.util.Scanner;
public class OlesyaAndRodion_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), t = sc.nextInt();
        sc.close();
        if(n == 1 && t == 10) {
            System.out.print("-1");
            return ;
        }
        String s = "";
        if(t == 10) {
            for(int i = 0; i < n-1; i++) {
                s += 1;
            }
            System.out.print(s + "0");   
        } else {
            for(int i = 0; i < n-1; i++) {
                s += t;
            }
            System.out.print(s + t);
        }
    }
}