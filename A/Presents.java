import java.util.*;
public class Presents {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), i = 1;
        Map<Integer, Integer> map = new HashMap<>();
        while(i <= n) {
            map.put(sc.nextInt(), i);
            i++;
        }
        sc.close();
        for(int j = 1; j <= n; j++)
            System.out.print(map.get(j) + " ");
    }
}