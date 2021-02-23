#include<bits/stdc++.h>
using namespace std;
/*
This problem requires the awareness of what is the shortest distance between two points, which is the linear line that connects them.
Then, just move the center of the circle along this line.
Calculating how the result of distance divided by 2*radius.
Watch out there might be data overflow during calculation of the distance. So we need to convert int data type into long long data type.
I have experience on this several times, so we need to evaluate every possible expression and determine if it's going to overflow.
Solving problem requires peace mind and patience, and most importantly, confidence. You need to have faith in yourself that you can solve it just as perfect as the 
problems setters do.
*/
int main(){
    int r,x1,y1,x2,y2;cin>>r>>x1>>y1>>x2>>y2;
    long long d=(long long)(sqrt((long long)(x1-x2)*(x1-x2)*1.0+(long long)(y1-y2)*(y1-y2)));
    if(d*d==(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))
    cout<<(d%(2*r)?d/(2*r)+1:d/(2*r));
    else cout<<d/(2*r)+1;
    return 0; 
}
