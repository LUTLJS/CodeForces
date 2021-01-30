import java.util.Scanner;
public class BearAndFindingCriminals {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), index = 0, a = sc.nextInt();
        int[] arr = new int[n];
        while(sc.hasNextInt()) {
            arr[index] = sc.nextInt();
            index++;
        }
        sc.close();
        int count = arr[a - 1] == 1 ? 1 : 0, l = a - 2, r = a;
        while(true) {
            if(l >= 0 && r < n) {
                int el = arr[l], er = arr[r];
                if(arr[l] == arr[r] && arr[l] == 1) count += 2;
                l--;
                r++;
            } else if(l < 0 && r < n) {
                if(arr[r] == 1) count++;
                r++;
            } else if(l >= 0 && r >= n) {
                if(arr[l] == 1) count++;
                l--;
            } else {
                break ;
            }
        }
        System.out.print(count + "");
    }
}
