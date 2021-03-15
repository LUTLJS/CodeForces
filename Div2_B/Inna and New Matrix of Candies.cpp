#include<bits/stdc++.h>
using namespace std;
/*
This is a tricky one. You need to fully understand how the game works.
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,m;cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    bool isne=false;
    vector<int> dif;
    for(int i=0;i<n;i++){
        int cs,cg;
        for(int j=0;j<m;j++){
            if(s[i][j]=='S')cs=j;
            if(s[i][j]=='G')cg=j;
        }
        if(cs-cg<0){
            isne=true;break;
        }else{
            dif.push_back(cs-cg);
        }
    }
    if(isne){cout<<-1;return 0;}
    sort(dif.begin(),dif.end());
    dif.erase(unique(dif.begin(),dif.end()),dif.end());
    cout<<dif.size();
    return 0;
}
