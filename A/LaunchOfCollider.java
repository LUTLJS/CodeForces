import java.util.Scanner;
public class LaunchOfCollider {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        String symbols = sc.nextLine();
        if(symbols.indexOf("RL") == -1) {
            sc.close();
            System.out.print("-1");
            return ;
        }
        int[] a = new int[n];
        int index = 0;
        while(sc.hasNextInt()) {
            a[index] = sc.nextInt();
            index++;
        }
        sc.close();
        int min = 0;
        boolean isFirst = true;
        for(int i = 0; i < n - 1; i++) {
            int j = symbols.substring(i).indexOf("RL");
            if(j != -1) {
                int dif = a[j + i + 1] - a[j + i];
                if(isFirst) {
                    min = dif;
                    isFirst = false;
                } else {
                    min = dif < min ? dif : min;
                }
                i += j + 1;
            } else {
                break ;
            }
        }
        System.out.print(min / 2 + "");
    }
}