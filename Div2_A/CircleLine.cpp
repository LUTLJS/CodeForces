#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    int stations[n+2];stations[0]=stations[1]=0;
    for(int i=2;i<n+2;i++)cin>>stations[i];
    int s,t;cin>>s>>t;
    if(s==t){cout<<0;return 0;}
    for(int i=1;i<n+2;i++)stations[i]+=stations[i-1];
    int ma=s>t?s:t,mi=s<t?s:t;
    cout<<min(stations[ma]-stations[mi],stations[n+1]-stations[ma]+stations[mi]);
    return 0;
}
