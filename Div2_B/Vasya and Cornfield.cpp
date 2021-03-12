#include<bits/stdc++.h>
using namespace std;
/*
find four mathmetical expressions of borders of the rectangle
(d,0) and (0,d) defines that the slope of four lines would be 1 and -1,
with this, and a coordinate of  a point, we can define the equation of the line that corss it
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,d,m;cin>>n>>d>>m;
    int b1=-d,b2=d,bb1=d,bb2=2*n-d;
    while(m--){
        int x,y;cin>>x>>y;
        int temp45b=y-x,temp135b=x+y;
        if(temp45b>=b1&&temp45b<=b2&&temp135b>=bb1&&temp135b<=bb2)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
