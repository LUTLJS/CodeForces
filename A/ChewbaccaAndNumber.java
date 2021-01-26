import java.util.Scanner;
public class ChewbaccaAndNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine(), output = "";
        sc.close();
        for(int i = 0; i < s.length(); i++) {
            if(i == 0) {
                int index = "5678".indexOf(s.charAt(0));
                if(index != -1) {
                    output += 9 - ("5678".charAt(index) - '0');
                } else {
                    output += s.charAt(0);
                }
            } else {
                int index = "56789".indexOf(s.charAt(i));
                if(index != -1) {
                    output += 9 - ("56789".charAt(index) - '0');
                } else {
                    output += s.charAt(i);
                }
            }
        }
        System.out.print(output);
    }
}