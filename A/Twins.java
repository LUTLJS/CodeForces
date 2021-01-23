import java.util.*;
public class Twins {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), sum = 0, index = 0;
        List<Integer> aL = new ArrayList<>();
        while(index < n) {
            int num = sc.nextInt();
            sum += num;
            aL.add(num);
            index++;
        }
        sc.close();
        Collections.sort(aL);
        int max = sum / 2 + 1, curr = 0;        
        for(int i = n - 1; i >= 0; i--) {
            curr += aL.get(i);
            if(max <= curr) {
                System.out.print(n - 1 - i + 1 + "");
                return ;
            }
        }
    }
}