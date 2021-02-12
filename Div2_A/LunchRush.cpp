#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;cin>>n>>k;
    int ma,a,b;n--;cin>>a>>b;
    ma=b<=k?a:(a-b+k);
    while(n--){
        int f,t;cin>>f>>t;
        ma=max((t<k?f:(f-t+k)),ma);
    }
    cout<<ma;
    return 0;
}
