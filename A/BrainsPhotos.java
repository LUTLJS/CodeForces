import java.util.Scanner;
public class BrainsPhotos {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), index = 0;
        sc.nextLine();
        while(index < n) {
            index++;
            String s = sc.nextLine();
            for(int i = 0; i < s.length(); i += 2) {
                if("BGW".indexOf(s.charAt(i)) == -1) {
                    sc.close();
                    System.out.print("#Color");
                    return ;
                }
            }
        }
        sc.close();
        System.out.print("#Black&White");
    }
}