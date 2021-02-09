#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,s;cin>>n>>s;
    pair<int,int> p[n];
    for(int i=0;i<n;i++){
        int x,y,k;cin>>x>>y>>k;
        p[i]={x*x+y*y,k};
    }
    sort(p,p+n);
    for(pair<int,int> x:p)
        if((s+=x.second)>=1e6){cout<<fixed<<setprecision(8)<<sqrt(x.first);return 0;}
    cout<<-1;
    return 0;
}
