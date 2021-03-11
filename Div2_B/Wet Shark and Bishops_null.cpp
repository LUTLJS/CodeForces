#include<bits/stdc++.h>
using namespace std;
/*
I'm trying to build a adjacency list here, lol.
Naively do it.
*/
pair<int,int> p[200002];
bool visited[200002]={};
vector<vector<int>> adj(200002);
int n;long long cnt=0;
void pro(int point){
    for(int xx=1;xx<=n;xx++){
            if(xx!=point)
            if(p[xx].second==p[xx].first+(p[point].second-p[point].first)){
                cnt++;
                adj[point].push_back(xx);
            }else
            if(p[xx].second==-p[xx].first+(p[point].second+p[point].first)){
                cnt++;
                adj[point].push_back(xx);
            }
    }
}
int main(){
    cin>>n;
    for(int i=1;i<n+1;i++){
        int x,y;cin>>x>>y;
        p[i]={x,y};
    }
    for(int i=1;i<n+1;i++){
            pro(i);
    }
    // for(int i=1;i<=n;i++){
    //     cout<<i<<":";
    //     for(auto x:adj[i])cout<<x<<" ";
    //     cout<<"\n";
    // }
    cout<<cnt/2;
    return 0;
}
