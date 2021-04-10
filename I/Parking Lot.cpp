#include<bits/stdc++.h>
using namespace std;
long long binpow(long long a,long long b){
    long long res=1;
    while(b>0){
        if(b&1)res*=a;
        a*=a;
        b>>=1;
    }
    return res;
}
int main(){
    int n;cin>>n;
    cout<<2*4*3*binpow(4,n-3)+(n-3)*4*3*3*binpow(4,n-4);
    return 0;
}
