#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    string s;int m;cin>>s>>m;
    map<int,int> mp;
    int a[m];
    for(int i=0;i<m;i++){int x;cin>>x;mp[x]++;}
    vector<pair<int,int>> re;
    for(auto [u,v]:mp){
        re.push_back({u,v});
    }
    for(auto x:re)cout<<x.first<<":"<<x.second<<"; ";cout<<"\n";
    //reverse(re.begin(),re.end());
    for(auto x:re)cout<<x.first<<":"<<x.second<<"; ";cout<<"\n";
    for(int i=1;i<re.size();i++)re[i].second+=re[i-1].second;
    for(int i=0;i<re.size();i++){
        cout<<re[i].first<<":"<<re[i].second<<"; ";
    }
    string ans="";
    vector<pair<int,int>> needreverse;
    bool isfirst=true;
    int start=-1;
    for(int i=0;i<re.size();i++){
        if(re[i].second&1){
            if(isfirst){
                start=re[i].first;
                isfirst=false;
            }
            if(i==re.size()-1)needreverse.push_back({start,re[i].first});
        }else{
            needreverse.push_back({start,re[i].first});
            isfirst=true;
        }
    }
    if(needreverse.size()==0){cout<<s;return 0;}
    string res=s.substr(0,needreverse[0].first-1);
    for(auto x:needreverse){
        cout<<x.first<<":"<<x.second<<"\n";
        if(x.first)
        for(int i=s.length()-x.second;i>=s.length()-x.first;i--)res+=s[i];
    }
    
    return 0;
}
