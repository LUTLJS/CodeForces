// We just need to know whether i is equals to mod when remainder hits 0
// That is just one MOD iteration.
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNextInt()) {
            int step = sc.nextInt();
            int mod = sc.nextInt();
            for(long i = 1; true ; i++) {
                if(step * i % mod == 0) {
                    if(i == mod) {                      
                        System.out.printf("%10d%10d    %s%n%n", step, mod, "Good Choice");                  
                    } else {                          
                        System.out.printf("%10d%10d    %s%n%n", step, mod, "Bad Choice");    
                    }
                    break;
                }
            }
        }
        sc.close();
    }
}