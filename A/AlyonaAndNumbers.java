import java.util.Scanner;
public class AlyonaAndNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt();
        long count = 0;
        sc.close();
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                // all we need is find the first element from 1 to m
                if((i + j) % 5 == 0) {
                    count += (m - j) / 5 + 1;
                    break;
                }
            }
        }
        System.out.print(count + "");
    }
}