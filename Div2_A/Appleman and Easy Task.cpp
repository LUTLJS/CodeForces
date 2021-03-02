#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string s[n];
    bool no=true;
    for(int i=0;i<n;i++)cin>>s[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // instead of using so many if else statements, just consider the minority
            // which have four adjacent cells. And we use for if to exclude the "side situation"
            int cnt=0,u=i-1,b=i+1,l=j-1,r=j+1;
            if(u>=0&&s[u][j]=='o')cnt++;
            if(l>=0&&s[i][l]=='o')cnt++;
            if(b<n&&s[b][j]=='o')cnt++;
            if(r<n&&s[i][r]=='o')cnt++;
            if(cnt&1)no=false;
        }
    }
    cout<<(no?"YES":"NO");
    return 0;
}
