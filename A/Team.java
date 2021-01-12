import java.util.*;
public class Team {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = 0;
        while(n > 0) {
            if(sc.nextInt() + sc.nextInt() + sc.nextInt() > 1) m++;
            n--;
        }
        System.out.printf(m+"");
    }
}