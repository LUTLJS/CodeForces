#include<bits/stdc++.h>
using namespace std;
int main(){
  // adjacency list, every element is a vector which maintains nodes that connect to the current index,
  // the weight could be pair.first or pair.second
  vector<pair<int,int>> adj[n+1];
  // vertex's state whether it has been processed or not
  bool processed[n+1]={};
  // x is the starting node
  int distance[n+1];
  for(int i=1;i<=n;i++)distance[i]=INF;
  distance[x]=0;
  // find the shorest path so-far
  priority_queue<pair<int,int>> q;
  q.push({0,x});
  while(!q.empty()){
    int a=q.top().second;q.pop();
    if(processed[a])continue;
    processed[a]=true;
    for(auto u:adj[a]){
      int b=u.first,w=u.second;
      if(distance[a]+w<distance[b]){
        distance[b]=distance[a]+w;
        q.push({-distance[b],b});
      }
    }
  }
  return 0;
}
