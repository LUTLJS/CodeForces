#include<bits/stdc++.h>
using namespace std;
bool visited[10];
vector<int> adj[5];
void dfs(int s);
int main(){
    
    for(int i=0;i<5;i++)
        adj[0].push_back(i+2);
    dfs(0);
    for(auto va:visited)cout<<"visited >> "<<va<<"\n";
    return 0;
}
void dfs(int s){
    if(visited[s]) return ;
    visited[s]=true;

    for(auto u:adj[s]){
        cout<<s<<" >> "<<u<<"\n";
    dfs(u);
    }
}

