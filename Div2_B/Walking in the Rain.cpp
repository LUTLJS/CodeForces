#include<bits/stdc++.h>
using namespace std;
/*
This is a problem I didn't think through and I solved it after I started coding.
It means I had a little thougts about how to solve this, but it was not totally clear.
When I was coding, intuition came, so I adapted.
*/
int main(){
    int x,n,cnt=0;cin>>n;int b[n];pair<int,int> a[n];
    for(int i=0;i<n;i++){
        // store the element and its original index
        // maintaining the original indexes is of future use
        // x is the first element here because after this, we will sort the array a in descecding order.
        cin>>x;a[i]={x,i};b[i]=x;}
    sort(a,a+n);
    for(int i=0;i<n;i++){
        // it's not accumulating these numbers, we get the latest number
        // set the b[] to 0, means it already was destroyed.
        cnt=a[i].first;b[a[i].second]=0;
        // use 0 and n-1 here because there is b[]=0 right above this statement
        // determine whether the current element is the first or last element in the original array b[];
        // If it's not the first and the last element, then determine if there are two consecutive zeros in the original array b[].
        // If there are acutally two consecutive zeros now in array b[], then we stop.
        if(a[i].second==0||a[i].second==n-1||b[a[i].second-1]==0||b[a[i].second+1]==0)
            break;}
    cout<<cnt;
    return 0;
}
