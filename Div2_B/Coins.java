import java.util.*;
public class Coins {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine(), s2 = sc.nextLine(), s3 = sc.nextLine();
        sc.close();
        Map<Character, Integer> map = new HashMap<>();
        map.put('A', 0);
        map.put('B', 0);
        map.put('C', 0);
        if(s1.charAt(1) == '>') {
            char c = s1.charAt(0);
            int value = map.get(Character.valueOf(c));
            map.put(Character.valueOf(c), value + 1);
        } else {
            char c = s1.charAt(2);
            int value = map.get(Character.valueOf(c));
            map.put(Character.valueOf(c), value + 1);
        }
        
        if(s2.charAt(1) == '>') {
            char c = s2.charAt(0);
            int value = map.get(Character.valueOf(c));
            map.put(Character.valueOf(c), value + 1);
        } else {
            char c = s2.charAt(2);
            int value = map.get(Character.valueOf(c));
            map.put(Character.valueOf(c), value + 1);
        }
        
        if(s3.charAt(1) == '>') {
            char c = s3.charAt(0);
            int value = map.get(Character.valueOf(c));
            map.put(Character.valueOf(c), value + 1);
        } else {
            char c = s3.charAt(2);
            int value = map.get(Character.valueOf(c));
            map.put(Character.valueOf(c), value + 1);
        }
        
        if(map.get('A') == 1 && map.get('B') == 1 && map.get('C') == 1) System.out.print("Impossible");
        else {
            if(map.get('A') == 0) System.out.print("A");
            else if(map.get('B') == 0) System.out.print("B");
            else if(map.get('C') == 0) System.out.print("C");
            
            if(map.get('A') == 1) System.out.print("A");
            else if(map.get('B') == 1) System.out.print("B");
            else if(map.get('C') == 1) System.out.print("C");
            
            if(map.get('A') == 2) System.out.print("A");
            else if(map.get('B') == 2) System.out.print("B");
            else if(map.get('C') == 2) System.out.print("C");
        }
         
    }
}
