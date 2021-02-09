#include<bits/stdc++.h>
using namespace std;
int girls[255];
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m;cin>>n>>m;
    bool qualified[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            qualified[i][j]=true;
    string s[n];
    for(int i=0;i<n;i++)cin>>s[i];
    
    for(int i=0;i<n;i++){
        int a[256];
        for(int j=0;j<256;j++)a[j]=0;
        for(int j=0;j<m;j++)a[s[i][j]]++;
        for(int j=0;j<m;j++)
            if(a[s[i][j]]>1)
                qualified[i][j]=false;
    }
    
    for(int i=0;i<m;i++){
        int a[256];
        for(int j=0;j<256;j++)a[j]=0;
        for(int j=0;j<n;j++)a[s[j][i]]++;
        for(int j=0;j<n;j++)
            if(a[s[j][i]]>1)
                qualified[j][i]=false;
    }
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(qualified[i][j])
                cout<<s[i][j];
    return 0;
}
