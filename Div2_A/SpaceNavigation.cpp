#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int px,py;
        cin>>px>>py;
        string s;
        cin>>s;
        int r=0,l=0,u=0,d=0;
        for(int j=0;j<s.length();j++){
            if(s[j]=='R')r++;
            if(s[j]=='L')l--;
            if(s[j]=='U')u++;
            if(s[j]=='D')d--;
        }
        if(px>=l&&px<=r&&py>=d&&py<=u)cout<<"YES\n";
            else cout<<"NO\n";
    }
    return 0;
}
