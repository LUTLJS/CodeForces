import java.util.*;
public class HelpVasilisaTheWise2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r1 = sc.nextInt(), r2 = sc.nextInt(), c1 = sc.nextInt(), c2 = sc.nextInt(), d1 = sc.nextInt(), d2 = sc.nextInt();
        sc.close();
        for(int i = 1; i <= 9; i++) {
            for(int j = 1; j <= 9; j++) {
                if(i != j && i + j == r1) {
                    for(int k = 1; k <= 9; k++) {
                        if(k != i && k != j && i + k == c1 && j + k == d2) {
                            for(int m = 1; m <= 9; m++) {
                                if(m != i && m != j && m != k && k + m == r2 && j + m == c2 && i + m == d1) {
                                    System.out.print(i + " " + j + "\n" + k + " " + m);
                                    return ;    
                                }
                            }
                        }       
                    }
                }                
            }
        }
        System.out.print("-1");
    }
}