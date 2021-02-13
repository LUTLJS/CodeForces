#include<bits/stdc++.h>
using namespace std;
// too many brace brackets
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    pair<int,int> mi={a[0],0},ma={a[0],0};
    for(int i=1;i<n;i++){
        if((mi.first)>=a[i]){(mi.first)=a[i];(mi.second)=i;}
        if((ma.first)<a[i]){(ma.first)=a[i];(ma.second)=i;}
    }
    if((mi.second)<(ma.second))cout<<(n-1-(mi.second)-1+(ma.second));
    else cout<<(n-1-(mi.second)+(ma.second));
    return 0;
}
