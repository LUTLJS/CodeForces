import java.util.Scanner;
public class SumOfDigits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        sc.close();
        int count = 0;
        while(true) {
            if(s.length() == 1) {
                System.out.print(count + "");
                return ;
            } else {
                int sum = 0;
                for(int i = 0; i < s.length(); i++) {
                    sum += s.charAt(i) - '0';
                }
                count++;
                s = sum + "";
            }
        }
    }
}
