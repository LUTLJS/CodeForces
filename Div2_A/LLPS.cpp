#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    char ma=s[0];
    for(int i=1;i<s.length();i++)ma=max(ma,s[i]);
    for(char c:s)if(c==ma)cout<<c;
    return 0;
}
