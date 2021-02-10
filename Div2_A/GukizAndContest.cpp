#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    int c[2001],a[n];
    for(int i=0;i<2001;i++)c[i]=0;
    for(int i=0;i<n;i++){int x;cin>>x;c[x]++;a[i]=x;}
    for(int i=1;i<2001;i++)c[i]+=c[i-1];
    for(int i=0;i<n;i++)cout<<c[2000]-c[a[i]]+1<<" ";
    return 0;
}
