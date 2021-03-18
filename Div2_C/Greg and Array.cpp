#include<bits/stdc++.h>
using namespace std;
/*
Suprise! We use the prefix sum again!

This is something new to me until this afternoon.
So I learned something new today. Congratulations!
The struggle is real. I spent some times pondering this problem.
And I was wondering how am I going to solve this.Then I checked out the editorial, however, I can't understand.
Then I googled.Thanks to the great geeksforgeeks.

There are n queries, each query is:
  add certain value v to all elements within a specific range
We don't do it one by one. We firstly create an array with zeros.
Then store v into its bounder position.
Finally we use prefix sum again to fulfill all the values that we have to add to the original array.
Now, the elements in specific position means we should add elements to the original array with the same positioin.
Then, overall, we finish the job in O(n) time complexity.
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,m,k;cin>>n>>m>>k;
    int a[n+1];
    for(int i=1;i<n+1;i++)cin>>a[i];
    tuple<int,int,int> t[m+1];
    for(int i=1;i<m+1;i++){
        int l,r,d;cin>>l>>r>>d;
        t[i]={l,r,d};
    }
    long long second[m+2]={};
    for(int i=0;i<k;i++){
        int x,y;cin>>x>>y;
        second[x]++;second[y+1]--;
    }
    for(int i=1;i<m+1;i++)second[i]+=second[i-1];
    long long b[n+2]={};
    for(int i=1;i<m+1;i++){
        if(second[i]!=0){
            tuple<int,int,int> tt=t[i];
            int l=get<0>(tt),r=get<1>(tt),d=get<2>(tt);
            b[l]+=second[i]*d;b[r+1]-=second[i]*d;
        }
    }
    for(int i=1;i<n+1;i++)b[i]+=b[i-1];
    for(int i=1;i<n+1;i++)cout<<a[i]+b[i]<<" ";
    return 0;
}
