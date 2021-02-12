#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x,sum=0;cin>>n>>x;
    while(n--){
        int e;cin>>e;sum+=e;
    }
    sum=0-sum;
    if(sum==0){cout<<0;return 0;}
    if(abs(sum)<=x){cout<<1;return 0;}
    if(abs(sum)%x!=0)cout<<abs(sum)/x+1;
        else cout<<abs(sum)/x;
    return 0;
}
