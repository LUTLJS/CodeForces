import java.util.*;
public class Keyboard {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String direction = sc.nextLine(), input = sc.nextLine();
        sc.close();
        String correct = "", alps = "qwertyuiopasdfghjkl;zxcvbnm,./";
        if(direction.equals("R")) {
            for(int i = 0; i < input.length(); i++) {
                correct += String.valueOf(alps.charAt(alps.indexOf(input.charAt(i)) - 1));
            }
        } else {
            for(int i = 0; i < input.length(); i++) {
                correct += String.valueOf(alps.charAt(alps.indexOf(input.charAt(i)) + 1));
            }
        }
        System.out.print(correct);        
    }
}