#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    double vp,vd,t,f,c;cin>>vp>>vd>>t>>f>>c;
    int cnt=0;
    double y=vd*t*vp/(vd-vp),
    x=vd*t/(vd-vp);
    while(x*x+y*y<c*c){
        cnt++;
        t=2*(x-t)+t+f;
        y=vd*t*vp/(vd-vp);
        x=vd*t/(vd-vp); 
    }
    cout<<cnt;
    return 0;
}
