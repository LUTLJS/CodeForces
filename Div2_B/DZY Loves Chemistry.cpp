#include<bits/stdc++.h>
using namespace std;
/*
build a relation between each chemical of each pairs. Then the answer is 2^(the number of edges)
depth first search application
*/
bool visited[51]={};
int edges=1;
vector<vector<int>> v(51);
void dfs(int u){
    visited[u]=true;
    for(auto x:v[u]){
        if(!visited[x]){
            edges*=2;
            dfs(x);
        }
    }
}
int main(){
    int n,m;cin>>n>>m;
    while(m--){
        int a,b;cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        if(v[i].size()!=0)
        if(!visited[i]){
            dfs(i);
        }
    }
    cout<<edges;
    return 0;
}
