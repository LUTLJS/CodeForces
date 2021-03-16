#include<bits/stdc++.h>
using namespace std;
/*
I was worried about the precision here, but it turned out to be accepted.
So, the main point is to find out when will these two graph meet.
If they meet, then it's time to drop a balabal.
If we draw these two graphs on coordinates then it's easy to observe that we just need to find out how many times 
these two graphs meet before the height hits c.
Pay attention here, it's the value of y that stands for distance.It's not the visual appearence of the graph.
I stuck here for like god knows how long, feeling almost desperate.
Use the line formula to solve this.
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    double vp,vd,t,f,c;cin>>vp>>vd>>t>>f>>c;
    if(vd<=vp){cout<<0;return 0;}
    int cnt=0;
    double y=vd*t*vp/(vd-vp),
    x=vd*t/(vd-vp);
    while(y<c){
        cnt++;
        t=2*(x-t)+t+f;
        y=vd*t*vp/(vd-vp);
        x=vd*t/(vd-vp); 
    }
    cout<<cnt;
    return 0;
}
