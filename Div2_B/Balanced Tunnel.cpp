#include<bits/stdc++.h>
using namespace std;
/*
find out all the cars that remain the same relative positions.
These are the ones that didn't break the rule.
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int cnt=0;
    int j=0;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        if(a[j]==b[i]){
            cnt++;
            j++;
            if(j==n)break;
            else{
                // find out the next car stays the same relative position
                while(mp[a[j]]){
                    j++;
                    if(j==n)break;
                }
            }
        }else{
            // if car b[i] is the one that changed its relative position, we mark it.
            // This is the one that broke the rule
            ++mp[b[i]];
        }
    }
    
    cout<<n-cnt;
    return 0;
}
