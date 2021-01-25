import java.util.*;
public class SerejaAndDima {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), i = 0;
        int[] a = new int[n];
        while(i < n) {
            a[i] = sc.nextInt();
            i++;
        }
        sc.close();
        int head = 0, tail = n - 1, s = 0, d = 0;
        boolean isSeTurn = true;
        while(head != tail) {
            int picked = 0;
            if(a[head] > a[tail]) {
                picked = a[head];
                head++;
            } else{
                picked = a[tail];
                tail--;
            }
            if(isSeTurn) {
                s += picked;
                isSeTurn = false;
            } else {
                d += picked;
                isSeTurn = true;
            }
        }
        if(isSeTurn) {
            s += a[head];
        } else {
            d += a[head];
        }
        System.out.printf(s + " " + d);
    }
}