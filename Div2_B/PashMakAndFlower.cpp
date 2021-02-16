#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int mi=a[0],ma=a[n-1];
    long long miCount=1,maCount=1;
    // count them
    for(int i=1;i<n;i++){
        if(a[i]==mi)miCount++;
        else break;
    }
    for(int i=n-2;i>=0;i--)
        if(a[i]==ma)maCount++;
        else break;
    if(mi==ma)cout<<0<<" "<<miCount*(miCount-1)/2;else
    cout<<ma-mi<<" "<<miCount*maCount;
    return 0;
}
