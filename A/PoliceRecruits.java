import java.util.*;
public class PoliceRecruits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), police = 0, uEvents = 0;
        while(n > 0) {
            n--;
            int curr = sc.nextInt();
            if(curr == -1) {
                if(police > 0) {
                    police--;
                } else {
                    uEvents++;
                }
            } else {
                police += curr;
            }
        }
        sc.close();
        System.out.print(uEvents + "");
    }
}
