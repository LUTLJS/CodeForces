import java.util.Scanner;
public class SnowFootprints {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        String s = sc.nextLine();
        sc.close();
        if(s.indexOf("R") == -1) {
            int leftMostL = s.indexOf("L"), rightMostL = 0;
            for(int i = leftMostL + 1; i < s.length(); i++) {
                if(s.charAt(i) != 'L') {
                    rightMostL = i - 1;
                    break ;
                }
            }
            System.out.print((rightMostL + 1) + " " + leftMostL);
            return ;
        } 
        if(s.indexOf("L") == -1) {
            int leftMostR = s.indexOf("R"), rightMostR = 0;
            for(int i = leftMostR + 1; i < s.length(); i++) {
                if(s.charAt(i) != 'R') {
                    rightMostR = i - 1;
                    break ;
                }
            }
            System.out.print((leftMostR + 1) + " " + (rightMostR + 2));
            return ;
        }
        if(s.indexOf("R") < s.indexOf("L")) {
            int leftMostR = s.indexOf("R"), rightMostR = 0,
            leftMostL = s.indexOf("L"), rightMostL = 0;
            for(int i = leftMostR + 1; i < s.length(); i++) {
                if(s.charAt(i) != 'R') {
                    rightMostR = i - 1;
                    break ;
                }
            }
            for(int i = leftMostL + 1; i < s.length(); i++) {
                if(s.charAt(i) != 'L') {
                    rightMostL = i - 1;
                    break ;
                }
            }
            System.out.print((rightMostL + 1) + " " + (rightMostR + 2));
        }
        if(s.indexOf("L") < s.indexOf("R")) {
            System.out.print((s.indexOf("L") + 1) + " " + s.indexOf("R"));
        }
    }
}
