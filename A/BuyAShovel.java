import java.util.*;
public class BuyAShovel {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt(), r = sc.nextInt(), i = 1;
        sc.close();
        while(true) {
            int remainder = i * k % 10;
            if(remainder == 0 || remainder == r) {
                System.out.print(i + "");
                return ;
            }
            i++;
        }
    }
}