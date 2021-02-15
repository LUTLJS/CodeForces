#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int a[n+1];
    for(int i=1;i<n+1;i++)cin>>a[i];
    int ma=a[1],mi=a[1],maindex=1,miindex=1;
    for(int i=2;i<n+1;i++){
        if(ma<a[i]){ma=a[i];maindex=i;}
        if(mi>a[i]){mi=a[i];miindex=i;}
    }
    
    if(miindex>maindex)swap(miindex,maindex);
    if(miindex-1>n-maindex)cout<<maindex-1;
        else cout<<n-miindex;
    return 0;
}
