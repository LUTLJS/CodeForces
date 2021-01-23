import java.util.*;
public class Juicer {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), b = sc.nextInt(), d = sc.nextInt(), waste = 0, count = 0;
        while(n > 0) {
            n--;
            int actual = sc.nextInt();
            if(actual <= b) {
                waste += actual;
            } 
            if(waste > d) {
                count++;
                waste = 0;
            }
        }
        System.out.print(count + "");
    }
}