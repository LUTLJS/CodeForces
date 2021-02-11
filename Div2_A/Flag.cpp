#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m;cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++)cin>>s[i];
    for(int i=0;i<n;i++){
        char c=s[i][0];
        for(int j=1;j<m;j++)
            if(c!=s[i][j]){cout<<"NO";return 0;}
        if(i==n-1){cout<<"YES";return 0;}
        else if(c==s[i+1][0]){cout<<"NO";return 0;}
    }
    return 0;
}


