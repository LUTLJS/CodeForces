import java.util.*;
public class HardExamNaiveCheat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        if(n == 0) {
            System.out.print("1");
            return ;
        }
        switch (n % 4) {
            case 1:
                System.out.print("8");
                break ;
            case 2:
                System.out.print("4");
                break ;
            case 3:
                System.out.print("2");
                break ;    
            default:
                System.out.print("6");
        }
    }
}