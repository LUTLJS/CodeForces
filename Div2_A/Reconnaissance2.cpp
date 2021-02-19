#include<bits/stdc++.h>
using namespace std;
/*
just calculate absolute value of every pair of neighbouring numbers,
including the first ele and the last ele since they form a circle
, so just append the first to the last, and the left is easy
*?
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;int a[n+1];
    for(int i=0;i<n;i++)cin>>a[i];
    a[n]=a[0];
    pair<int,int> mi={(int)1e9,-1};
    for(int i=0;i<n;i++){
        if(abs(a[i+1]-a[i])<mi.first){
            mi={abs(a[i+1]-a[i]),i};
        }
    }
    if(mi.second==n-1)cout<<mi.second+1<<" "<<1;
    else cout<<mi.second+1<<" "<<mi.second+2;
    return 0;
}
