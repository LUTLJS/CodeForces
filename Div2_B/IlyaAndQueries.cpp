#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string s;cin>>s;
    int v[s.length()-1];
    for(int i=0;i<s.length()-1;i++)
        if(s[i]==s[i+1])
            if(i==0)v[0]=1;else v[i]=v[i-1]+1;
        else 
            if(i==0)v[0]=0;else v[i]=v[i-1];
    int m;cin>>m;
    while(m--){
        int l,r;cin>>l>>r;
        if(l==1)cout<<v[r-2]<<"\n";
        else cout<<v[r-2]-v[l-2]<<"\n";
    }
    return 0;
}
