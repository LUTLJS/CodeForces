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
            map<pair<int,int>,int> mp;
            int index=1;
            for(auto x:aa[i]){
                mp[{x.first,x.second}]=index++;
            }
            cout<<"map:";
            for(auto [u,v]:mp){
                cout<<"{"<<u.first<<","<<u.second<<"}:"<<v<<"; ";
            }
            cout<<"\n";
            for(int j=0;j<aa[i].size();j++){
                int mp1=mp[{aa[i][j].first-1,aa[i][j].second}];
                if(mp1!=0){
                    adj[j+1].push_back(mp1);
                    //adj[mp1].push_back(j+1);
                }
                int mp2=mp[{aa[i][j].first+1,aa[i][j].second}];
                if(mp2!=0){
                    adj[j+1].push_back(mp2);
                    //adj[mp2].push_back(j+1);
                }
                int mp3=mp[{aa[i][j].first,aa[i][j].second-1}];
                if(mp3!=0){
                    adj[j+1].push_back(mp3);
                    //adj[mp3].push_back(j+1);
                }
                int mp4=mp[{aa[i][j].first,aa[i][j].second+1}];
                if(mp4!=0){
                    adj[j+1].push_back(mp4);
                    //adj[mp4].push_back(j+1);
                }
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
