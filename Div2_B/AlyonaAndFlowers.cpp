#include<bits/stdc++.h> 
using namespace std;
/*
Prefix sum is used here.
But watch out the li and ri since there are given from 1, not from 0.
Think about it this way: how can we abtain the possible maximum sum?
Since there are negative and 0 and positive numbers in the array, so if we want the possible maximum sum,
we need to exclude all the negative numbers and include all the positive numbers. But we are limited to the options that 
mother gave us. So we have to treament every segment as a whole. We are not able to pick random one element. So we calculate 
the sum of every segments, if it appears negative, we don't need them. If it is positive, then we welcome it.
*/
int main(){
    int n,m;cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=1;i<n;i++)a[i]+=a[i-1];
    int sum=0;
    while(m--){
        int x,y;cin>>x>>y;
        if(x-1==0)(a[y-1]<0?:sum+=a[y-1]);
        else (a[y-1]-a[x-1-1]<0?:sum+=a[y-1]-a[x-1-1]);
    }
    cout<<sum;
    return 0;
}
