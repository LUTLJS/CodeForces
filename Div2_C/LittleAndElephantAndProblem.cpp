#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){int e;cin>>e;a[i]=b[i]=e;}
    sort(a,a+n);
    int dif=0;
    for(int i=0;i<n;i++)if(a[i]!=b[i])dif++;
    if(dif>=3)cout<<"NO";
    else cout<<"YES";
    return 0;
}
