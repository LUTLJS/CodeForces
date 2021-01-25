import java.util.*;
public class VanyaAndFence {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), h = sc.nextInt(), width = 0;
        while(n > 0) {
            if(sc.nextInt() > h) {
                width += 2;
            } else {
                width++;
            }
            n--;
        }
        sc.close();
        System.out.printf(width+"");
    }
}