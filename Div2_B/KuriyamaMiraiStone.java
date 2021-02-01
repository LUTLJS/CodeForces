import java.util.*;
public class KuriyamaMiraiStone{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt(),i=0;
        ArrayList<Integer> a=new ArrayList<>();
        int[] d=new int[n];
        while(i<n){
            int e=s.nextInt();
            a.add(e);
            d[i++]=e;
        }
        ArrayList<Integer> f=quickSort(a);
        int m=s.nextInt();
        while(m>0){
            m--;
            int t=s.nextInt(),l=s.nextInt(),r=s.nextInt();
            long sum=0;
            if(t==1)for(int j=l-1;j<r;j++)sum+=d[j];
                else for(int j=l-1;j<r;j++)sum+=f.get(j);
            if(s.hasNextInt())System.out.println(sum+"");
                else System.out.print(sum+"");
        }
        s.close();
    }
    private static ArrayList<Integer> quickSort(ArrayList<Integer> arr){
        if(arr.size()<=1) return arr;
        int p=arr.get(arr.size()-1);
        ArrayList<Integer> l=new ArrayList<>(),r=new ArrayList<>();
        for(int k=0;k<arr.size()-1;k++){
            int e=arr.get(k);
            if(e<p)l.add(e);
                else r.add(e);
        }
        ArrayList<Integer> b=quickSort(l),c=quickSort(r);
        b.add(p);
        for(int k=0;k<c.size();k++)b.add(c.get(k));
        return b;
    }
}
