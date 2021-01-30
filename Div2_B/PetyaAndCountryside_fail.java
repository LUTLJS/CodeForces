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
        if(a.length == 1) {
            System.out.print("1");
            return ;
        }
        
    }
    private static int[] getSubsequence(int[] a, int start) {
        if(start == a.length - 1) return new int[0];
        if(start == a.length - 1) return {2, };
        
        int first = a[start], second = a[start + 1];
        if(first < second) {
            int curr = second;
            boolean beforeFirstLarger = true;
            for(int i = start + 2; i < a.lengt() - 1; i++) {
                if(beforeFirstLarger) {
                    if(curr > a[i]) beforeFirstLarger = false;
                } else {
                    if(curr < a[i]) return {i- start, i};
                }
                curr = a[i];
                if(i == a.length - 1) return {i - start, i};
            }
            return {2, start + 1};
        }
    }
}
