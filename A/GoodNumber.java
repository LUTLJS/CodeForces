import java.util.*;
public class GoodNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt(), count = 0, index = 0;
        sc.nextLine();
        String[] strings = new String[n];
        while(sc.hasNextLine()) {
            strings[index] = sc.nextLine();
            index++;
        }
        sc.close();
        String numbers = "";
        for(int i = 0; i <= k; i++) {
            numbers += i;
        }
        for(int i = 0; i < n; i++) {
            String temp = strings[i];
            // for each string
            boolean containsZeroToK = true;
            for(int j = 0; j <= k; j++) {
                if(temp.indexOf(numbers.charAt(j)) == -1) {
                    // string doesn't contains all numbers from 0 to k
                    containsZeroToK = false;
                    break;
                }
            }
            if(containsZeroToK) count++;
        }
        System.out.print(count + "");
    }
}