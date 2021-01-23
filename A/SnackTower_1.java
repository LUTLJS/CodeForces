import java.util.*;
public class SnackTower_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), index = 0;
        int[] a = new int[n];
        while(index < n) {
            a[index] = sc.nextInt();
            index++;
        }
        sc.close();
        // min is the latest printed number
        // assume the latest printed number is (n + 1)
        int min = n + 1;
        // store the unprinted numbers
        Set<Integer> aL = new HashSet<>();
        for(int i = 0; i < n; i++) {
           int e = a[i];
           if(e + 1 == min) {
               System.out.print(e + " ");
               // everytime a number has been printed, 
               // the min changes its value to the last printed number
               min = e;
               while(true) {
                   if(aL.contains(min - 1)) {
                       System.out.print(min - 1 + " ");
                       aL.remove(min - 1);
                       min--;
                   } else {
                       break;
                   }
               }
               System.out.println("");
           } else {
               System.out.println("");
               aL.add(e);
           }            
        }
    }
}