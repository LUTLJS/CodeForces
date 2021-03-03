#include<bits/stdc++.h>
using namespace std;
/*
this one runs slower, but it's enough to pass all tests since n is small enough.
We can remove redundant code here obviously.
*/
int main(){
    long long xa,ya,xb,yb;cin>>xa>>ya>>xb>>yb;
    if(xa>xb)swap(xa,xb);if(ya>yb)swap(ya,yb);
    int n;cin>>n;
    tuple<long long,long long,int> a[n];
    for(int i=0;i<n;i++){
        long long x,y;int r;cin>>x>>y>>r;
        a[i]={x,y,r};
    }
    long long cnt=0;
    for(long long i=xa;i<=xb;i++){
        bool onenoBlanket=false,twonoBlanket=false;
        for(int j=0;j<n;j++){
            long long x=get<0>(a[j]),y=get<1>(a[j]);
            int radius=get<2>(a[j]);
            double distance1=sqrt((x-i)*(x-i)+(y-ya)*(y-ya)+.0);
            double distance2=sqrt((x-i)*(x-i)+(y-yb)*(y-yb)+.0);
            if(distance1<=radius){onenoBlanket=true;}
            if(distance2<=radius){twonoBlanket=true;}
        }
        if(!onenoBlanket)cnt++;
        if(!twonoBlanket)cnt++;
    }
    for(long long i=ya+1;i<=yb-1;i++){
        bool onenoBlanket=false,twonoBlanket=false;
        for(int j=0;j<n;j++){
            long long x=get<0>(a[j]),y=get<1>(a[j]);
            int radius=get<2>(a[j]);
            double distance1=sqrt((x-xa)*(x-xa)+(y-i)*(y-i)+.0);
            double distance2=sqrt((x-xb)*(x-xb)+(y-i)*(y-i)+.0);
            if(distance1<=radius){onenoBlanket=true;}
            if(distance2<=radius){twonoBlanket=true;}
        }
        if(!onenoBlanket)cnt++;
        if(!twonoBlanket)cnt++;
    }
    cout<<cnt;
    return 0;
}
