import java.util.*;
public class LinelandMail {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), i = 0;
        int[] a = new int[n];
        while(i < n) {
            a[i] = sc.nextInt();
            i++;
        }
        sc.close();
        System.out.println((a[1] - a[0]) + " " + (a[n - 1] - a[0]));
        for(int j = 1; j < n - 1; j++) {
            int min1 = a[j] - a[j - 1], min2 = a[j + 1] - a[j], max1 = a[j] - a[0], max2 = a[n - 1] - a[j];
            System.out.println((min1 < min2 ? min1 : min2) + " " + (max1 > max2 ? max1 : max2));
        }
        System.out.print((a[n - 1] - a[n - 2]) + " " +(a[n - 1] - a[0]));
    }
}