import java.util.Scanner;
public class NezzarAndColorfulBalls {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(sc.hasNextInt()) {
            int n = sc.nextInt(), curr = sc.nextInt(), count = 1, max = 1;
            boolean isFirstCount = true;
            for(int i = 1; i < n; i++) {
                int number = sc.nextInt();
                if(curr == number) {
                    count++;
                    if(i == n -1) {
                        if(isFirstCount) {
                            max = count;
                        } else {
                            max = max < count ? count : max;
                        }
                    }
                } else {
                    curr = number;
                    if(isFirstCount) {
                        max = count;
                        isFirstCount = false;
                    } else {
                        max = max < count ? count : max;
                    }
                    count = 1;
                }
            }
            if(sc.hasNextInt()) {
                System.out.println(max + "");
            } else {
                System.out.print(max + "");
            }
        }
        sc.close();
    }
}
