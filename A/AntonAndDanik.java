import java.util.*;
public class AntonAndDanik {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), countA = 0;
        sc.nextLine();
        String s = sc.nextLine();
        sc.close();
        for(int i = 0; i < s.length(); i++) 
            if(s.charAt(i) == 'A') countA++;
        if(n % 2 == 0) {
            if(countA > n / 2) {
                System.out.printf("Anton");
            } else if(countA == n / 2) {
                System.out.printf("Friendship");
            } else {
                System.out.printf("Danik");
            }
        } else {
            if(countA > n / 2) {
                System.out.printf("Anton");
            } else {
                System.out.printf("Danik");
            }
        }       
    }
}