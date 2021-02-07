#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        for(int i=0;i<s.length();i++){
            if(i&1){
                char c=s[i];
                if(c=='z')cout<<'y';
                else cout<<'z';
            }else{
                char c=s[i];
                if(c=='a')cout<<'b';
                else cout<<'a';
            }
        }
        cout<<"\n";
    }
    return 0;
}
