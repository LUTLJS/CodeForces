
#include <bits/stdc++.h>
using namespace std;
/*
You are given a graph with n nodes and m edges.
Calculate maximum number of edges that can be removed from the graph so that it contains exactly k connected components.

In order to solve this, you need to understand that "k connected components" means there are k parts in this graph.
And then what you need to understand is that if the graph has k parts and m edges, then this graph at least n-k edges
original graph has m edges, so at miximum, we can remove m-(n-k) edges so it become a graph that has exactly k parts.
However, what we need to do is count how many parts are there in the graph? if countParts is less than k, then we do nothing, cout<<-1.
*/
// 1<=n<=100000, so LIMIT is 1e5+1, same as the visited array
const int LIMIT=1e5+1;
// use this to mark the node's state. Originally, all of them are false 
bool visited[LIMIT]={};
// This is an adjancency list that holds all edgesa and vertices
vector<int> adj[LIMIT];
void dfs(int node){
		visited[node]=true;
    // iterate all nodes that directly connect with the current node
		for(auto u:adj[node])
		    if(!visited[u])
			    dfs(u);
}
int main() {
	int n,m,k,cnt=0;cin>>n>>m>>k;
	for(int i=0;i<m;i++){
		int u,v;cin>>u>>v;
		adj[u].push_back(v);
    // don't forget to store v as index because this means that there are edges out from v, so we can processe it afterwards
    // We treated this graph as directed graph
    // If there is edge between v and u, then we will use both of them as index, so we can use afterwards
		adj[v].push_back(u);
	}
	for(int i=1;i<=n;i++){
    // If the current node has yet been visited, then we increase cnt by one. It's a new part. But we don't care how many vertices there are in this part.
		if(!visited[i]){
			cnt++;
      // then we use dfs to process all nodes that either directly or indirectly connect with the current node
			dfs(i);
		}
	}
  // if the graphh already has k-plus parts then we don't anything
	if(cnt>k)cout<<-1;
  // if not, we can remove m-(n-k) edges at most.
	else cout<<m-(n-k);
	return 0;
}
