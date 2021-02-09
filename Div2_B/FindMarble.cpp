/*
 This one requires some clear understanding of the problem description.
 Other than that, all we need to do is consider the "bad infinite loop".
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,s,t;cin>>n>>s>>t;
    int p[n+1];
    // indexes from 1 to n, not from 0 to n-1
    // for future sake
    for(int i=1;i<n+1;i++)cin>>p[i];
    int count=0;
    if(s==t){cout<<0;return 0;}
    int original=s;
    while(s!=p[s]){
        count++;
        if(p[s]==t){cout<<count;return 0;}
        s=p[s];
        // since pi's are distinct, so all we need to do to keep 
        // us from  bad infinite loop is determine if s is equal to the original s
        // otherwise we need to determine if the future pi is equal to previous pi
        // to avoid infinite loop
        if(s==original){cout<<-1;return 0;}
    }
    cout<<-1;
    return 0;
}
