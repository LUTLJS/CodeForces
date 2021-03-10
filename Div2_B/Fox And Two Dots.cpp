#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> adj(2501);
bool visited[2501]={};
bool anyes=false;
int startpoint;
void dfs(int y){
    visited[y]=true;
    for(auto x:adj[y]){
        if(x==startpoint){
                anyes=true;
                return ;
        }
        if(!visited[x]){
            dfs(x);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,m;cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++)cin>>s[i];
    vector<pair<int,int>> aa[256];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            aa[s[i][j]].push_back({i,j});
    for(int i='A';i<='Z';i++){
        if(aa[i].size()>=4){
            map<pair<int,int>,int> mp,mp1;
            int index=1;
            // give these cells unique numbers, starting from 1
            for(auto x:aa[i]){
                mp[{x.first,x.second}]=index++;
                mp1[{x.first,x.second}]=mp[{x.first,x.second}];
            }
            // make an adjacency list
            for(auto [u,v]:mp){
                int m2=mp1[{u.first+1,u.second}];
                if(m2!=0){
                    adj[v].push_back(m2);
                    adj[m2].push_back(v);
                }
                int m4=mp1[{u.first,u.second+1}];
                if(m4!=0){
                    adj[v].push_back(m4);
                    adj[m4].push_back(v);
                }
            }
            for(int j=0;j<2501;j++){
                if(adj[j].size()!=0){
                        // j would be starting point, which is point 1
                        visited[j]=true;
                        startpoint=j;
                        for(auto x:adj[j]){
                            visited[x]=true;
                            for(auto y:adj[x]){
                                if(y!=j){
                                    dfs(y);
                                    if(anyes){cout<<"Yes";return 0;}
                                    for(int k=0;k<2501;k++)visited[k]=false;
                                    visited[x]=true;
                                }
                            }
                            visited[x]=false;
                            visited[j]=true;
                        }
                        for(int k=0;k<2501;k++)visited[k]=false;
                }
            }
            // in case there is another situation we need to take care of
            for(int k=0;k<2501;k++){
                visited[k]=false;
                adj[k]={};
            }
        }
    }
    cout<<"No";
    return 0;
}
