#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,k;cin>>n>>k;
    int a[n];for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    vector<pair<int,int>> v;
    int curr=a[0],count=1;
    for(int i=1;i<n;i++){
        if(a[i]!=curr){
            v.push_back({count,curr});
            curr=a[i];
            count=1;
        }else count++;
        if(i==n-1){
            v.push_back({count,a[i]});
        }
    }
    int maxi=v.size()-1,mini=0;
    if(v.size()==1){cout<<0;return 0;}
    while(k--){
        v[maxi].first--;
        if(v[mini].second>v[maxi].second-1)mini=maxi;
        if(v[maxi-1].second!=v[maxi].second-1){
                auto po=v.begin()+maxi;
                v.insert(po,{1,v[maxi].second-1});
                if(v[maxi+1].first!=0){
                   maxi++;
                }
        }else{v[maxi-1].first++;
            if(v[maxi].first==0)maxi--;
        }
        v[mini].first--;
        v.insert(v.begin(),{1,v[mini].second-1});
        mini--;
    }
    cout<<v[maxi].second-v[mini].second;
    return 0;
}
