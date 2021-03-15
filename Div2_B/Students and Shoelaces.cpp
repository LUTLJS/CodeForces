#include<bits/stdc++.h>
using namespace std;
/*
This requires data structure. 
We need to take care of students and their laces that connecte them.
Use an adjacency list would easily solve the problem.
Just need to reorganize the input. reorganize the input.
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,m;cin>>n>>m;
    vector<vector<int>> p(n+1);
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        p[x].push_back(y);
        p[y].push_back(x);
    }
    for(int i=0;i<n+1;i++)sort(p[i].begin(),p[i].end());
    int cnt=0;
    while(true){
        bool cntone=false;
        vector<pair<int,int>> neederase;
        for(int i=0;i<p.size();i++){
            if(p[i].size()!=0){
                if(p[i].size()==1){cntone=true;
                    int fin=p[i][0];
                    // store it first to avoid process it too early.
                    neederase.push_back({fin,i});
                }
            }
        }
        
        // for(int i=0;i<p.size();i++){
        //     if(p[i].size()!=0){
        //         for(auto x:p[i])cout<<x<<" ";
        //         cout<<"\n";
        //     }
        // }
        // cout<<"-----\n";
        if(cntone){
            cnt++;
            for(auto x:neederase){
                if(p[x.first].size()!=0){
                    vector<int>::iterator it=find(p[x.first].begin(),p[x.first].end(),x.second);
                    p[x.first].erase(it);
                }
                p[x.second].clear();
            }
            neederase.clear();
        }
        else break;
    }
    cout<<cnt;
    return 0;
}
