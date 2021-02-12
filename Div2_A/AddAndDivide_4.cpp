#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        if(b>a)cout<<1<<"\n";if(b==a)cout<<2<<"\n";
        if(a>b){
            int originalB=b,count;bool isFirst=true;
            if(b==1)b++;
            while(true){
                 long long m=1;int i;
                 for(i=1;;i++){m*=b;if(m>a)break;}
                 int curr=i+b-originalB;
                 if(isFirst){count=curr;isFirst=false;}
                 else if(count>curr)count=curr;
                 else if(count<curr){cout<<count<<"\n";break;}
                 b++;
            }
        }
    }
    return 0;
}
