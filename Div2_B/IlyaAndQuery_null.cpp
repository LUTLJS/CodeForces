#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string s;cin>>s;
    int m;cin>>m;
    while(m--){
        int l,r,count=0;cin>>l>>r;
        for(int i=l;i<r;i++){
            if(s[i-1]==s[i])count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}
