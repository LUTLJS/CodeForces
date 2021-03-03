#include<bits/stdc++.h>
using namespace std;
/*
I was kind of stuck.Because there are several situations here. I'm talking about k.
I was trying to include all kinds of possible cases of k. So I got confused.
We just started from the very the firt thing we can do.
Make negative numbers positive as many as possible.
So we do this. But we need to take care of all kinds of limitations.
k could be 0, all elements could be positive.
So we add more if else statements to make the process more generous.
Simply put, include all kinds of situations in the process.
*/
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    pair<int,int> mini={1e5,-1};
    for(int i=0;i<n;i++){
        if(a[i]<0){
            if(k>0){
                a[i]=-a[i];
                k--;
            }
        }
        if(a[i]<mini.first)mini={a[i],i};
    }
    if(k&1)a[mini.second]=-a[mini.second];
    long long sum=0;
    for(auto x:a)sum+=x;
    cout<<sum;
    return 0;
}


