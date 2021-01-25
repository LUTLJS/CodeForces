import java.util.*;
public class BeautifulMatrix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i = 0;
        while(true) {
            if(sc.nextInt() == 1) break;
            i++;
        }
        sc.close();
        if(i <= 4) {
            System.out.printf(2 + Math.abs(i + 10 -12) + "");
        } else if(i <= 9) {
            System.out.printf(1 + Math.abs(i + 5 -12) + "");
        } else if(i <= 14) {
            System.out.printf(Math.abs(i - 12) + "");
        } else if(i <= 19) {
            System.out.printf(1 + Math.abs(i - 5 - 12) + "");
        } else {
            System.out.printf(2 + Math.abs(i -10 -12) + "");
        }
             
        
    } 
}