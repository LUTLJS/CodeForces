#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> adj[6];
    bool visited[6];
    int distance[6];
    queue<int> q;
    adj[0].push_back(1);
    adj[0].push_back(3);
    adj[0].push_back(4);
    adj[3].push_back(0);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[4].push_back(5);
    adj[4].push_back(2);
    adj[4].push_back(3);
    adj[5].push_back(1);
    adj[5].push_back(4);
    adj[5].push_back(3);
    for(int i=0;i<6;i++)visited[i]=0;
    visited[5]=true;
    distance[5]=0;
    q.push(5);
    while(!q.empty()){
        int s=q.front();q.pop();
        for(auto u: adj[s]){
            if(visited[u]) continue;
            visited[u]=true;
            distance[u]=distance[s]+1;
            cout<<u<<"->5:"<<distance[u]<<"\n";
            q.push(u);
        }
    }
    return 0;
}
