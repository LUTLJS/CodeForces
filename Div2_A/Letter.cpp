#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++)cin>>s[i];
    int firstStarInColumn=(int)1e9,firstStarInRow=(int)1e9,lastStarInRow=-1,lastStarInColumn=-1;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(s[i][j]=='*'){
                firstStarInRow=min(firstStarInRow,j);
                lastStarInRow=max(lastStarInRow,j);
            }
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(s[j][i]=='*'){
                firstStarInColumn=min(firstStarInColumn,j);
                lastStarInColumn=max(lastStarInColumn,j);}
    for(int i=firstStarInColumn;i<=lastStarInColumn;i++)
        for(int j=firstStarInRow;j<=lastStarInRow;j++)
            cout<<s[i][j];
        cout<<"\n";
    return 0;
    
}
