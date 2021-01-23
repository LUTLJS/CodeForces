import java.util.*;
class Main {
    public static void main(String[] args) {
        Main work = new Main();
        work.begin();
    }
    private void begin() {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        while(n != 0) {
            long limit = (long) Math.sqrt(n);         
            if(limit * limit == n) System.out.println("yes");
            if(limit * limit != n) System.out.println("no");
            n = sc.nextLong();
        }
        sc.close();
    }
}
