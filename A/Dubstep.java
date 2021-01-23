import java.util.Scanner;
public class Dubstep {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s =sc.nextLine();
        sc.close();
        int start = 0;
        boolean firstPrint = true;
        while(start < s.length()) {
            int index = s.indexOf("WUB", start);
            if(index > start) {
                if(firstPrint) {
                    System.out.print(s.substring(start, index));
                    firstPrint = false;
                } else  {
                    System.out.print(" " + s.substring(start, index));    
                }
            }
            if(index == -1) {
                if(firstPrint) {
                    System.out.print(s.substring(start));    
                } else {
                    System.out.print(" " + s.substring(start));
                }
                return ;
            }
            start = index + 3; 
        }     
    }
}