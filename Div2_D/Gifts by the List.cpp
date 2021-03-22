#include<bits/stdc++.h>
using namespace std;
vector<int> sons[100001],v,par(100001,-1),a(100001);
void dfs(int k){
    for(auto u:sons[k]){
        dfs(u);
        if(a[u]!=-1&&a[u]!=a[k]){
            cout<<-1,exit(0);
        }
    }
    if(a[k]==k)v.push_back(k),a[k]=-1;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,m;cin>>n>>m;
    for(int i=0,u,v;i<m;i++){cin>>u>>v,sons[u].push_back(v),par[v]=u;}
    for(int i=1;i<n+1;i++)cin>>a[i];
    for(int i=1;i<n+1;i++){if(par[i]==-1)dfs(i);}
    cout<<v.size()<<"\n";
    for(auto x:v)cout<<x<<"\n";
    return 0;
}
