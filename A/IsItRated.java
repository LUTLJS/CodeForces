import java.util.*;
public class IsItRated {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), index = 0;
        int[] after = new int[n];
        while(index < n) {
            int before = sc.nextInt();
            after[index] = sc.nextInt();
            // exists a single pair of numbers that are not the same
            if(before != after[index]) {
                System.out.print("rated");
                sc.close();
                return ;
            }
            index++; 
        }
        sc.close();
        // the following is based on the fact all pairs of number have the same values
        for(int i = 0; i < n - 1; i++) {
            // this is the only "unrated" case that the description tells us
            if(after[i] < after[i + 1]) {
                System.out.print("unrated");
                return ;
            }
        }
        // any other cases belong to "maybe"
        System.out.print("maybe");
    }
}