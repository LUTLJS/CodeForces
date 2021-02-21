#include<bits/stdc++.h>
using namespace std;
/*
need to clearly understand the description
*/
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    int res=1,left=0;
    for(int i=0;i<n;i++){
        // if the number of people from last round plus the current group exceeds the capacity of the bus
        // then the whole current group waits for next bus
        // it means members from the same group must board on the same bus
        if(left+a[i]<=m)left+=a[i];
        else {res++;left=a[i];}
    }
    
    cout<<res;
    return 0;
}
