import java.util.Scanner;
public class Decoding{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        s.nextLine();
        String ss=s.nextLine(),s1="";
        s.close();
        if(n%2==1){
            for(int i=n-2;i>0;i-=2)s1+=ss.charAt(i);
            for(int i=0;i<n;i+=2)s1+=ss.charAt(i);
        }else{
            for(int i=n-2;i>1;i-=2)s1+=ss.charAt(i);
            s1+=ss.substring(0,2);
            for(int i=3;i<n;i+=2)s1+=ss.charAt(i);
        } 
        System.out.print(s1);
    }
}  
import java.util.Scanner;
public class Decoding{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        s.nextLine();
        String ss=s.nextLine();
        s.close();
        if(n%2==1){
            for(int i=n-2;i>0;i-=2)p(ss.charAt(i));
            for(int i=0;i<n;i+=2)p(ss.charAt(i));
        }else{
            for(int i=n-2;i>1;i-=2)p(ss.charAt(i));
            System.out.print(ss.substring(0,2));
            for(int i=3;i<n;i+=2)p(ss.charAt(i));
        }
    }
    private static void p(char c){System.out.print(c+"");}
}
