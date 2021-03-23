#include<bits/stdc++.h>
using namespace std;
/*
It took me two days to understand the editorial. I am awesome!.
Also, my endurance of confusion has expanded! Great job!
*/
/*
toposort it, then reverse it, since toposort makes ancestor come before their discendants.
However, we don't need that. What we need is actually the opposite.
So, how do we remove the redundents. If it doesn't appear in the array, we simply don't put it into resulting sequence.
*/
/*
Iterate through vertices from resulting sequence, all vertices from current vertex subtree are going to give gift to current vertex because it's the first 
ancestor from the resulting sequence.
*/
/*
every pair of family relation is an edge of a graph in terms of mathmatical model
further more, father-son suggests that this is a directed edge of a graph.
So, one of the intputs is: a directed acyclic graph with vertices of which every one has at most one ingoing edge.
The other input is: a sequence of vertices,which are the men to whom the men wants to give gift.
To solve this problem,
*/
/*
I still don't know how this works.
So, this confusion led to discouragement.
I feel I'm going to quit.
Oh,hell no! I'm not going to quit.
This is totally normal for me.
Because I'm going to improve.
*/
vector<int> sons[100001],v,par(100001,-1),a(100001);
/*
Why do we need dfs here? Wanted to access all descendants of people k.
Why do we need to process all descendants of k?
*/
void dfs(int k){
    for(auto u:sons[k]){
        dfs(u);
        if(a[u]!=-1&&a[u]!=a[k]){
            cout<<-1,exit(0);
        }
    }
    /*
    The 
    
    */
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
