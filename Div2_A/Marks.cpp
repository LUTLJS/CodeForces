#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    vector<pair<char,int>> a[m];
    bool theBest[n]={};
    for(int i=0;i<n;i++){
        string s;cin>>s;
        for(int j=0;j<s.length();j++){
            a[j].push_back({s[j],i});
        }
    }
    for(int i=0;i<m;i++){
        sort(a[i].begin(),a[i].end());
        theBest[a[i][a[i].size()-1].second]=true;
        for(int j=a[i].size()-2;j>=0;j--){
            if(a[i][j].first==a[i][a[i].size()-1].first)
            theBest[a[i][j].second]=true;
            else break;
        }
    }
    int cnt=0;
    for(bool x:theBest)if(x==true)cnt++;
    cout<<cnt;
    return 0;
}
