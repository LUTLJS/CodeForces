#include<bits/stdc++.h>
using namespace std;
long long p(int n,int k)
{
    if (k>n) return 0;
    if (k*2>n) k=n-k;
    if (k==0) return 1;
    long long r=n;
    for(int i=2;i<=k;i++) {
        r*=(n-i+1);
        r/=i;
    }
    return r;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    long long sum=0,n,m,t;cin>>n>>m>>t;
    for(int i=4;i<t;i++){
        int g=t-i;
        if(g<=m&&i<=n){
            sum+=p(n,i)*p(m,g);
        }
    }
    cout<<sum<<" ";
    return 0;
}
