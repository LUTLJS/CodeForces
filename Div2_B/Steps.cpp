#include<bits/stdc++.h>
using namespace std;
/*
From the begining, we ought to think about it according to variants of dx and dy.
We begin tackling it by taking one unseparable baby step at a time.
Think about all possible combinations of dx and dy.
Don't write code and submit unless you are sure that the solution is totally correct.
You don't expect it to be correct when you don't firmly believe that it's totally going to work out just right.
Write code and submit when you have a correct solution.
Analize all possible cases to ensure it's a correct solution.
If you can't come up with a solution, either you have skipped some implicit inputs or you just don't have knowledge about the subjects it relates.
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    long long n,m;cin>>n>>m;
    long long xc,yc;cin>>xc>>yc;
    int k;cin>>k;
    long long sum=0;
    while(k--){
        long long dx,dy;cin>>dx>>dy;
        long long t;
        if(dx==0&&dy>0)t=(m-yc)/dy,yc+=dy*t;
        if(dx==0&&dy<0)t=(1-yc)/dy,yc+=dy*t;
        if(dx>0&&dy==0)t=(n-xc)/dx,xc+=dx*t;
        if(dx<0&&dy==0)t=(1-xc)/dx,xc+=dx*t;
        if(dx!=0&&dy!=0){
            long long t1=(1-xc)/dx,t2=(n-xc)/dx,t3=(1-yc)/dy,t4=(m-yc)/dy;
            if(dx>0&&dy>0)t=min(t2,t4);
            if(dx<0&&dy<0)t=min(t1,t3);
            if(dx<0&&dy>0)t=min(t1,t4);
            if(dx>0&&dy<0)t=min(t2,t3);
            xc+=dx*t,yc+=dy*t;
        }
        sum+=t;
    }
    cout<<sum;
    return 0;
}
