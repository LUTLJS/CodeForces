#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,d;cin>>n>>m>>d;
    n*=m;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    // the difference between a[i] and a[0]
    for(int i=1;i<n;i++)a[i]-=a[0];
    a[0]=0;
    for(int i=0;i<n;i++){
        if(a[i]%d){
            cout<<-1;return 0;
        }else a[i]/=d;
    }
    long long k=a[n/2],r=0;
    // how many d does each element need
    for(int i=0;i<n;i++)r+=abs(k-a[i]);
    cout<<r;
    return 0;
}
