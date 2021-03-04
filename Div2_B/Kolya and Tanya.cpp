#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod=int(1e9)+7;
ll powmod(ll a,ll b){
    ll res=1;
    while(b>0){
        if(b&1) res=res*a%mod;
        a=a*a%mod;
        b/=2;
    }
    return res;
}

int main(){
    int n;cin>>n;
    long long sum=1;
    cout<<(powmod(3,3*n)-powmod(7,n)+mod)%mod;
    return 0;
}
