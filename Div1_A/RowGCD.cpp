#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m;cin>>n>>m;
    long long a[n],b[m];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    long long g=0;
    for(int i=1;i<n;i++)a[i]-=a[0];
    for(int j=2;j<n;j++){
        g=__gcd(g,a[j]-a[1]);
    }
    for(int j=0;j<m;j++){
        long long res=__gcd(a[0]+b[j],g);
        cout<<abs(res)<<" ";
    }
    return 0;
}
