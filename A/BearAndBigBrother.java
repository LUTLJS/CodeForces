import java.util.*;
public class BearAndBigBrother {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(), b = sc.nextInt(), n = 0;
        while(true) {
            n++;
            a *= 3;
            b <<= 1;
            if(a > b) break;
        }
        System.out.printf(n+"");
    }
}