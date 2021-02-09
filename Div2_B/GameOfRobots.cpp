#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,k;cin>>n>>k;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
        if(k>i)k-=i;
        else{cout<<a[k];return 0;}
    }
}
