#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    long long n,k;cin>>n>>k;
    long a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    if(k==1){cout<<a[0];return 0;}
    for(long long i=1;i<=n;i++)if(i*(i-1)/2<k&&k<(i+1)*i/2){cout<<a[k-(i-1)*i/2-1];return 0;}
    return 0;
}
