import java.util.Scanner;
public class Football {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        int count1 = 1, count2 = 0;
        String first = sc.nextLine(), second = "";
        if(n == 1) {
            System.out.print(first);
            sc.close();
            return ;
        }
        while(true) {
            String temp = sc.nextLine();
            if(first.equals(temp)) {
                count1++;
            } else {
                second = temp;
                count2++;
            }
            if(count1 >= (n + 1) / 2) {
                System.out.print(first);
                sc.close();
                return ;
            } 
            if(count2 >= (n + 1) /2) {
                System.out.print(second);
                sc.close();
                return ;
            }
        }      
    }
}