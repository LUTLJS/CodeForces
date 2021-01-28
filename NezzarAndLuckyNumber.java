import java.util.Scanner;
public class NezzarAndLuckyNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(), index = 0;
        while(index < t) {
            index++;
            int q = sc.nextInt(), d = sc.nextInt();
            for(int i = 0; i < q; i++) {
                int number = sc.nextInt();
                int remainder = number % d;
                if((remainder + 10) % d == 0) {
                    if(sc.hasNextInt()) {
                        System.out.println("NO");
                    } else {
                        System.out.print("NO");
                    }
                } else {
                    if(sc.hasNextInt()) {
                        System.out.println("YES");
                    } else {
                        System.out.print("YES");
                    }
                }
            }
        }
        sc.close();
    }
}
