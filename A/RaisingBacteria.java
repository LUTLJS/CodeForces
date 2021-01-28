import java.util.Scanner;
public class RaisingBacteria {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print(find(sc.nextInt()) + "");
        sc.close();
    }
    private static int find(int value) {
        if(value == 1) return 1;
        for(int i = 1; true; i++) {
            if(1 << i == value) return 1;
            if(1 << i > value) return 1 + find(value - (1 << (i - 1)));
        }
    }
}
