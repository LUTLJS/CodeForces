#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    if(a[n-1]==1){
        for(int i=0;i<n-1;i++)cout<<a[i]<<" ";
        cout<<2;
    }else{ 
        cout<<1<<" ";
        for(int i=0;i<n-1;i++)cout<<a[i]<<" ";
    }
    return 0;
}
