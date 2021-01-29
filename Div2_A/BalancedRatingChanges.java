import java.util.Scanner;
public class BalancedRatingChanges {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), index = 1;
        while(sc.hasNextInt()) {
            int number = sc.nextInt();
            if(number % 2 == 0) {
                if(sc.hasNextInt()) {
                    System.out.println(number / 2 + "");
                } else {
                    System.out.print(number / 2 + "");
                }
            } else {
                if(index % 2 == 1) {
                    double f = number / 2.0;
                    if(sc.hasNextInt()) {
                    System.out.println((int)(f + 0.5) + "");
                    } else {
                        System.out.print((int)(f + 0.5) + "");
                    }
                } else {
                    double f = number / 2.0;
                    if(sc.hasNextInt()) {
                    System.out.println((int)(f - 0.5) + "");
                    } else {
                        System.out.print((int)(f - 0.5) + "");
                    }
                }
                index++;
            }
        }
        sc.close();
    }
}
