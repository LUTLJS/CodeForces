// this solution presents time-limit exceeded while performing on a large scale of numbers
import java.util.*;
public class SnackTower {
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
        List<Integer> aL = new ArrayList<>();
        for(int i = 0; i < n; i++) {
           int e = a[i];
           if(e + 1 == min) {
               System.out.print(e + " ");
               // everytime a number has been printed, 
               // the min changes its value to the last printed number
               min = e;
               for(int j = 0; j < aL.size(); j++) {
                   int num = aL.get(j);
                   if(num + 1 == min) {
                       aL.remove(j);
                       j--;
                       // min changes its value to the previous printed number num
                       min = num;
                       System.out.print(num + " ");
                   } else {
                       // since num is no suitable for printing and elements in aL 
                       // are stored in descending order, there is no sense to continue the loop
                       break;
                   }
               }
               System.out.println("");
           } else {
               System.out.println("");
               // ensure e will be added properly
               boolean added = false;
               for(int k = 0; k < aL.size(); k++) {
                   if(aL.get(k) < e) {
                       aL.add(k, e);
                       added = true;
                       // once e has been added, loop has to stop.
                       // otherwise it will be added so many times
                       break;
                   }
               }
               if(!added) aL.add(e);
           }            
        }
    }
}