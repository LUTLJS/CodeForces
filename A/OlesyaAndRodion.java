import java.util.Scanner;
import java.math.BigInteger;
public class OlesyaAndRodion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String t = sc.next(), s = "";
        sc.close();
        for(int i = 0; i < n; i++) {
            s += "9"; 
        }
        BigInteger b = new BigInteger(s);
        BigInteger result = b.subtract(b.mod(new BigInteger(t)));
        String end = result.equals(BigInteger.ZERO) ? "-1" : result.toString();
        System.out.print(end);
    }
}