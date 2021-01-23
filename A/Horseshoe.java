import java.util.*;
public class Horseshoe {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] a = new int[4];
        int i = 0, count = 0;
        while(i < 4) {
            a[i] = sc.nextInt();
            i++;
        }

        for(int j = 0; j < 3; j++) {
            for(int k = j + 1; k < 4; k++) {
                if(a[j] != 0 && a[j] == a[k]) {
                    count++;
                    a[k] = 0;
                }
            }
        }

        System.out.print(count + "");
    }
}