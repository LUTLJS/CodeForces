import java.util.Scanner;
public class CaisaAndPylons {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), index = 0;
        int[] arr = new int[n];
        while(sc.hasNextInt()) {
            arr[index] = sc.nextInt();
            index++;
        }
        sc.close();
        int currHeight = 0, totalPay = 0, energy = 0;
        for(int i = 0; i < n; i++) {
            energy += currHeight - arr[i];
            if(energy < 0) {
                totalPay += 0 - energy;
                energy = 0;
            }
            currHeight = arr[i];
        }
        System.out.print(totalPay + "");
    }
}
