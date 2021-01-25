import java.util.Scanner;
public class OathNightWatch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), index = 0;
        if(n <= 2) {
            System.out.print("0");
            sc.close();
            return ;
        }
        int[] a = new int[n];
        while(index < n) {
            a[index] = sc.nextInt();
            index++;
        }
        sc.close();
        int min = a[0], max = a[0];
        for(int i = 1; i < n; i++) {
            if(a[i] < min) min = a[i];
            if(a[i] > max) max = a[i];
        }
        if(min == max) {
            System.out.print("0");
        } else {
            int countMin = 0, countMax = 0;
            for(int i = 0; i < n; i++) {
                if(a[i] == min) countMin++;
                if(a[i] == max) countMax++;
             }
             System.out.print(n - countMax - countMin + "");
        }
    }
}