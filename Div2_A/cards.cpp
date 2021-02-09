#include<bits/stdc++.h>
using namespace std;
pair<int,int> p[101];
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    for(int i=1;i<=n;i++){cin>>p[i].first;p[i].second=i;}
    sort(p+1,p+n+1);
    for(int i=1;i<=n/2;i++){
        cout<<p[i].second<<" "<<p[n-i+1].second<<"\n";
    }
    return 0;
}
