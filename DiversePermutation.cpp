#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0,j=1;i<n;i+=2,j++)a[i]=j;
    for(int i=1,j=n;i<n;i+=2,j--)a[i]=j;
    if(k&1){
        for(int i=k;i<n;i++)a[i]=a[i-1]+1;
    }else for(int i=k;i<n;i++)a[i]=a[i-1]-1;
    for(int x:a)cout<<x<<" ";
    return 0;
}
