#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
       int n,w;cin>>n>>w;
       map<int,int> mp;
       for(int i=0;i<n;i++){
           int x;cin>>x;
           mp[x]++;
       }
       long long unit=0;
       priority_queue<pair<int,int>> p;
       for(auto [u,v]:mp){
           unit+=u;
           if(v-1>0)
           p.push({v-1,u});
       }
       w-=unit;
       int cnt=1;
       if(!p.empty())cnt=p.top().first+1;
       while(w){
           if(!p.empty()){
               pair<int,int> x=p.top();
               p.pop();
                   if(w>=x.second){
                       w-=x.second;
                       cnt--;
                       if(x.first-1>0)p.push({x.first-1,x.second});
                   }else break;
           }else break;
       }
       cout<<cnt<<"\n";
    }
    return 0;
}
