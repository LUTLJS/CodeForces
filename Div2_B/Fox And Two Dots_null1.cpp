#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> adj(2501);
bool visited[2501]={};
int startingpoint,cntpoints=0;
bool anyes=false;
void dfs(int y){
    for(auto x:adj[y]){
        if(!visited[x]){
            visited[x]=true;
            if(x==startingpoint){
                if(cntpoints>=4){anyes=true;return ;}
                else return ;
            }
            cntpoints++;
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
        if(aa[i].size()!=0){
            cout<<(char)i<<":";
            for(auto x:aa[i])cout<<"{"<<x.first<<" "<<x.second<<"};";
            cout<<"\n";
        }
    }
    for(int i='A';i<='Z';i++){
        if(aa[i].size()>=4){
            map<pair<int,int>,int> mp,mp1;
            int index=1;
            for(auto x:aa[i]){
                mp[{x.first,x.second}]=index++;
                mp1[{x.first,x.second}]=mp[{x.first,x.second}];
            }
            cout<<"map:";
            for(auto [u,v]:mp){
                cout<<"{"<<u.first<<","<<u.second<<"}:"<<v<<"; ";
            }
            cout<<"\n";
            for(auto [u,v]:mp){
                int m1=mp1[{u.first-1,u.second}];
                if(m1!=0){
                    adj[v].push_back(m1);
                    adj[m1].push_back(v);
                }
                int m2=mp1[{u.first+1,u.second}];
                if(m2!=0){
                    adj[v].push_back(m2);
                    adj[m2].push_back(v);
                }
                int m3=mp1[{u.first,u.second-1}];
                if(m3!=0){
                    adj[v].push_back(m3);
                    adj[m3].push_back(v);
                }
                int m4=mp1[{u.first,u.second+1}];
                if(m4!=0){
                    adj[v].push_back(m4);
                    adj[m4].push_back(v);
                }
                cout<<"("<<u.first<<","<<u.second<<"}m1-4:"<<m1<<" "<<m2<<" "<<m3<<" "<<m4<<"\n";
            }
            cout<<"done processing:\n";
            for(int j=0;j<2501;j++){
                if(adj[j].size()!=0){
                    cout<<j<<":";
                    for(auto x:adj[j])cout<<x<<" ";
                    cout<<"\n";
                }
            }
            cout<<"dfs:\n";
            for(int j=0;j<2501;j++){
                if(adj[j].size()!=0){
                    startingpoint=j;
                    cntpoints++;
                    dfs(j);
                    if(anyes){cout<<"YES";return 0;}
                    for(int k=0;k<2501;k++)visited[k]=false;
                    cntpoints=0;
                }
            }
        }
    }
    cout<<"NO";
    return 0;
}
