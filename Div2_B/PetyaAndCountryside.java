import java.util.Scanner;
public class PetyaAndCountryside {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), index = 0;
        int[] a = new int[n];
        while(sc.hasNextInt()) {
            a[index] = sc.nextInt();
            index++;
        }
        sc.close();
        int max = 0;
        boolean isFirstMax = true;
        for(int i = 0; i < n; i++) {
            int count = 1, curr1 = a[i], curr2 = a[i];
            for(int j = i - 1; j >= 0; j--) {
                if(a[j] <= curr1){
                    count++;
                    curr1 = a[j];
                } else {
                    break ;
                }
            }
            for(int j = i + 1; j < n; j++) {
                if(curr2 >= a[j]) {
                    count++;
                    curr2 = a[j];
                } else {
                    break;
                }
            }
            if(isFirstMax) {
                max = count;
                isFirstMax = false;
            } else {
                max = max < count ? count : max;
            }
        }
        System.out.print(max + "");
    }
}
