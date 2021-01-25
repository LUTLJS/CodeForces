import java.util.*;
public class DieRoll {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int y = sc.nextInt(), w = sc.nextInt();
        sc.close();
        int wins = 6 - (y >= w ? y : w) + 1;
        if(wins == 2 || wins == 3 || wins == 6) {
            System.out.print("1/" + 6 / wins);
        } else if(wins == 4) {
            System.out.print("2/3");
        } else {
            System.out.print(wins + "/6");
        }
    }
}