import java.util.Scanner;
import java.math.BigInteger;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNextBigInteger()) {
            System.out.println(sc.nextBigInteger().multiply(sc.nextBigInteger()).toString());
        }
        sc.close();
    }
}