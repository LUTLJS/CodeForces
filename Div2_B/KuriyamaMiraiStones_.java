import java.util.*;
public class KuriyamaMiraiStones {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), index = 0;
        long[] a = new long[n],b = new long[n];
        while(index < n) {
            a[index] = sc.nextLong();
            b[index] = a[index];
            index++;
        }
        Arrays.sort(b);
        for(int i=1;i<n;i++){
            a[i]+=a[i-1];
            b[i]+=b[i-1];
        }
        sc.nextInt();
        while(sc.hasNextInt()) {
            int type = sc.nextInt(),l = sc.nextInt(), r = sc.nextInt();
            long sum = 0;
            if(type == 1){
                if(l==1)sum=a[r-1];
                    else sum=a[r-1]-a[l-2];
            }else{
                if(l==1)sum=b[r-1];
                    else sum=b[r-1]-b[l-2];
            }
            if(sc.hasNextInt()) {
                System.out.println(sum + "");
            } else {
                System.out.print(sum + "");
            }
        }
        sc.close();
    }
}
