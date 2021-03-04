#include<bits/stdc++.h>
using namespace std;
vector<int> v(100001);
vector<int> u(100001);
void power27(){
    v[1]=27;
    u[1]=21;
    for(int i=2;i<100001;i++){
        v[i]=(v[i-1]*27)%1000000007;
        u[i]=(u[i-1]*21)%1000000007;
    }
}

int main(){
    int n;cin>>n;
    long long sum=0;
    power27();
    for(int i=1;i<=n;i++){
        sum+=v[n-i]%1000000007*(u[i]%1000000007)*(n-i+1)%1000000007;
    }
    cout<<sum%1000000007;
    return 0;
}
