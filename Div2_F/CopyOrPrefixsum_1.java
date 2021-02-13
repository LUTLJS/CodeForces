import java.util.Scanner;
public class A{
    static int n=0;static long m=-1l,ct=0l;
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            n=sc.nextInt();
            int[] a=new int[n];
            for(int i=0;i<n;i++)a[i]=sc.nextInt();
            Node root=new Node(a[0]);
            if(n>1){
                insert(root,(long)a[0],a,1,n);
                if(m==-1l){System.out.println(ct+"");}
                    else System.out.println((m+1+ct%1000000007l)%1000000007l+"");
                ct=0l;
            }else System.out.println("1");
        }
    }
    static void insert(Node root,long sum,int[] b,int i,int n){
        if(i==n-1){
            ct++;
            if(sum!=0)ct++;
            if(ct>1000000007l){m+=ct%1000000007l;ct=0l;}
            return ;
        }
        root.left=new Node(b[i]);;
        insert(root.left,(long)(sum+b[i]),b,i+1,n);
        if(sum!=0){
            root.right=new Node(b[i]-(int)sum);;
            insert(root.right,(long)(b[i]),b,i+1,n);}
    }
}
class Node{
    int val;Node left;Node right;
    public Node(int x){
        this.val=x;
        this.left=null;
        this.right=null;
    }
}
