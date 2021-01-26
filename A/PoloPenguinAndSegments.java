import java.util.Scanner;
public class PoloPenguinAndSegments {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        sc.nextInt();
        int k = sc.nextInt(), count = 0;
        while(sc.hasNextInt()) {
            int l = sc.nextInt(), r = sc.nextInt();
            count += r - l + 1;
        }
        sc.close();
        int remainder = count % k;
        if(remainder == 0) {
            System.out.print("0");
        } else {
            //int moves = remainder > k /2 ? k - remainder : remainder;
            int moves = k - remainder;
            System.out.print(moves + "");
        }
    }
}