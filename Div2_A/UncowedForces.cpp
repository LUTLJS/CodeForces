#include<bits/stdc++.h>
using namespace std;
// here  we need to notice that there will be difference between our result and the correct answer if we just use the calculating equation.
// obviously, the m/250 part generates fractional number which leads to unprecise result
// so we remove the bracket 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m1,m2,m3,m4,m5,w1,w2,w3,w4,w5,h1,h2;
    cin>>m1>>m2>>m3>>m4>>m5>>w1>>w2>>w3>>w4>>w5>>h1>>h2;
    cout<<(max((int)(0.3*500),500-500*m1/250-50*w1)+
            max((int)(0.3*1000),1000-1000*m2/250-50*w2)+
            max((int)(0.3*1500),1500-1500*m3/250-50*w3)+
            max((int)(0.3*2000),2000-2000*m4/250-50*w4)+
            max((int)(0.3*2500),2500-2500*m5/250-50*w5)+
            h1*100-h2*50);
    return 0;
}
