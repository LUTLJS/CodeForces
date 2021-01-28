import java.util.Scanner;
public class BowWowAndTheTimetable {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        sc.close();
        int len = s.length();
        if(len == 1) {
            System.out.print("0");
            return ;
        }
        if(s.substring(1).indexOf("1") == -1) {
            if((len - 1) % 2 == 0) {
                len = (len - 1) / 2;
            } else {
                len = (len - 1 ) / 2 + 1;
            }
        } else {
            len = (len - 1) / 2 + 1;
        }
        
        System.out.print(len + "");
    }
}
