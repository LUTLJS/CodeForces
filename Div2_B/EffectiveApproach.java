import java.util.Scanner;
public class EffectiveApproach{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt(),i=1;
        int[] a=new int[n+1];
        while(i<=n)a[s.nextInt()]=i++;
        s.nextInt();
        long s1=0,s2=0;
        while(s.hasNextInt()){
            int ss=a[s.nextInt()];
            s1+=ss;
            s2+=n-ss+1;
        }
        s.close();
        System.out.print(s1+" "+s2);
    }
}
