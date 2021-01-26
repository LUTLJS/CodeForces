import java.util.*;
public class OddDivisor {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        sc.nextLong();
        while(sc.hasNextLong()) {
            long num = sc.nextLong();
            boolean hasOddDivisor = false;
            for(long i = 1; i <= (long)Math.sqrt(num); i++) {
                if(num % i == 0 && num / i % 2 == 1) {
                    hasOddDivisor = true;
                    System.out.print("YES\n");
                    break;
                }
            }
            if(!hasOddDivisor) System.out.print("NO\n");
        }
        sc.close();
    }
}