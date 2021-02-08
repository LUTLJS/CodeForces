#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(true){
        t++;
        string s=to_string(t);
        set<char> sets;
        for(int i=0;i<s.length();i++){
            sets.insert(s[i]);
        }
        if(sets.size()==s.length()){cout<<s;break;}
    }
    return 0;
}
