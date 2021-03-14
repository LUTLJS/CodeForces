#include<bits/stdc++.h>
using namespace std;
/*
repeat yourself too many times so that's why you get time limit exceeded.
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    string s;int m;cin>>s>>m;
    while(m--){
        int x;cin>>x;
        string temp=s.substr(x-1,s.length()-2*x+2);
        reverse(temp.begin(),temp.end());
        s=s.substr(0,x-1)+temp+s.substr(s.length()-x+1);
    }
    cout<<s;
    return 0;
}
