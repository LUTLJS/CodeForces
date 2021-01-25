import java.util.Scanner;
public class MountainScenery {
    public static void main(String[] arags) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), peaks = sc.nextInt(), index = 0;
        int[] a = new int[2 * n + 1];
        while(sc.hasNextInt()) {
            a[index] = sc.nextInt();
            index++;
        }
        sc.close();
        int count = 0;
        int[] indexes = new int[peaks];
        if(a[0] > a[1]) {
            // peak bottom peak
            if(a[0] - a[1] >= 2) indexes[count++] = 0;
            for(int i = 2; i < a.length - 1; i += 2) {
                if(count == peaks) break;
                if(a[i] - a[i - 1] >= 2 && a[i] - a[i + 1] >= 2) indexes[count++] = i;
            }          
        } else {
            // bottom peak bottom
            for(int i = 1; i < a.length - 1; i += 2) {
                if(count == peaks) break;
                if(a[i] - a[i - 1] >= 2 && a[i] - a[i + 1] >= 2) indexes[count++] = i;
            }          
        }
        printInitialEles(indexes, a); 
    }
    private static void printInitialEles(int[] indexes, int[] a) {
        for(int i = 0, j = 0; i < a.length; i++) {
            if(indexes[j] == i) {
                if(j < indexes.length - 1) j++;
                System.out.print(a[i] - 1 + " ");
            } else {
                System.out.print(a[i] + " ");
            }
        }
    }
}