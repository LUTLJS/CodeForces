#include<bits/stdc++.h>
using namespace std;
/*
map is such a good thing for counting duplicates.Thanks for that guy helping with solving Strange Definition problem.
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    map<long long,long long> mpx,mpy;
    map<pair<long long,long long>,long long> mp;
    for(int i=0;i<n;i++){
        long long x,y;cin>>x>>y;
        mpx[x]++;mpy[y]++;
        mp[{x,y}]++;
    }
    long long sum=0;
    for(auto [u,v]:mpx){
        if(v!=1)
        sum+=v*(v-1)/2;
    }
    for(auto [u,v]:mpy)if(v!=1)sum+=v*(v-1)/2;
    long long ansum=0;
    for(auto [u,v]:mp){
        if(v!=1)
        ansum+=v*(v-1)/2;
    }
    cout<<sum-ansum;
    return 0;
}
