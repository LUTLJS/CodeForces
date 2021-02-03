#include<bits/stdc++.h>
using namespace std;
set<char> sets;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    char c;
    cin>>n>>m>>c;
    string room[n];
    for(int i=0;i<n;i++) cin>>room[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(room[i][j]==c){
                if(i!=0&&room[i-1][j]!=c) sets.insert(room[i-1][j]);
                if(i!=n-1&&room[i+1][j]!=c) sets.insert(room[i+1][j]);
                if(j!=0&&room[i][j-1]!=c) sets.insert(room[i][j-1]);
                if(j!=m-1&&room[i][j+1]!=c) sets.insert(room[i][j+1]);
            }
        }
    }
    if(sets.find('.')!=sets.end())cout<<sets.size()-1;
        else cout<<sets.size();
    return 0;
}
