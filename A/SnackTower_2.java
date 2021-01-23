import java.util.*;
public class SnackTower_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), index = 0, min = n + 1;
        // store the unprinted numbers
        Set<Integer> aL = new HashSet<>();
        while(index < n) {
            int e = sc.nextInt();
            // min is the latest printed number
            // assume the latest printed number is (n + 1)   
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
            index++;
        }
        sc.close();        
    }
}