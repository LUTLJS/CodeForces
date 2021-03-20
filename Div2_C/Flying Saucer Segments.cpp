#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,m;cin>>n>>m;
    long long res=1,a=3;
    while(n>0){
        if(n&1)res=res%m*(a%m);
        a=a%m*(a%m);
        n>>=1;
    }
    if(res%m==0)cout<<m-1;
    else cout<<(res%m-(1%m))%m;
    return 0;
}
