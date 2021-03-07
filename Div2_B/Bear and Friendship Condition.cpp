#include<bits/stdc++.h>
using namespace std;
const int N=150001;
vector<vector<int>> adj(N);
bool visited[N]={};
/*
cntVsCompo: count vertices of each components of the graph
The network is reasonable if cntVsCompo*(cntBsCompo-1)/2==edges/2
edges: 2*(the actual number of edges of each components of the graph)
*/
long long cntVsCompo=0,edges=0;
void dfs(int a){
    visited[a]=true;
    // Count all the edges that connect to vertex a
    edges+=adj[a].size();
    for(auto x:adj[a]){
        if(!visited[x]){
            cntVsCompo++;
            dfs(x);
        }
    }
}
int main(){
    int n,m;cin>>n>>m;
    while(m--){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1;i<N;i++){
        if(adj[i].size()!=0){
            if(!visited[i]){
                // Then this is the one that we have not counted.
                cntVsCompo++;
                dfs(i);
                //cout<<i<<": "<<"cntV"<<cntVsCompo<<" edges:"<<edges<<"\n";
                if(cntVsCompo*(cntVsCompo-1)/2!=edges/2)
                {cout<<"NO";return 0;}
                // Prepare for the next components
                cntVsCompo=0;edges=0;
            }
        }
    }
    cout<<"YES";
    return 0;
}
