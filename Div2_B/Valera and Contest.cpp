#include<bits/stdc++.h>
using namespace std;
/*
don't forget to check if n-k could be zero!

*/
int main(){
    int n,k,l,r,sall,sk;cin>>n>>k>>l>>r>>sall>>sk;
    if(sk%k==0){
        for(int i=0;i<k;i++)cout<<sk/k<<" ";
    }else{
        int num=sk%k;
        for(int i=0;i<num;i++)cout<<sk/k+1<<" ";
        for(int i=0;i<k-num;i++)cout<<sk/k<<" ";
    }
    if(n-k!=0)
    if((sall-sk)%(n-k)==0){
        for(int i=0;i<n-k;i++)cout<<(sall-sk)/(n-k)<<" ";
    }else{
        int num=(sall-sk)%(n-k);
        for(int i=0;i<num;i++)cout<<(sall-sk)/(n-k)+1<<" ";
        for(int i=0;i<n-k-num;i++)cout<<(sall-sk)/(n-k)<<" ";
    }
    return 0;
}
