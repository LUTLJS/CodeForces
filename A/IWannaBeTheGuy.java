import java.util.*;
public class IWannaBeTheGuy {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<Integer> aL = new ArrayList<>();
        int n = sc.nextInt(), x = sc.nextInt();
        while(x > 0) {
            aL.add(sc.nextInt());
            x--;
        }
        int y = sc.nextInt();
        while(y > 0) {
            aL.add(sc.nextInt());
            y--;
        }
        sc.close();
        for(int i = 1; i <= n; i++) {
            if(aL.size() == 0 || !aL.contains(i)) {
                System.out.print("Oh, my keyboard!");
                return ;
            }
        }
        System.out.print("I become the guy.");
    }
}