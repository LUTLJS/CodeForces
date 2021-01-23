import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNextInt()) {
            int n = sc.nextInt(), m = sc.nextInt(), c = sc.nextInt();
            if(n == 0) break;
            // black
            if(c == 0) {
                int max1 = (n - 7) * (m - 7) / 2;
                System.out.println(max1 + "");
            } else {
                int max2 = ((n - 7) * (m - 7) + 1) / 2 ;
                System.out.println(max2 + "");
            }
        }
        sc.close();
    }
}