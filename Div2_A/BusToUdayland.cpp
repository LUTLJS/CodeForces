#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    bool isFirst=true,foundIt=false;
    vector<string> ss;
    string s;
    while(n--){
        cin>>s;
        if(s[0]=='O'&&s[1]=='O'){
            if(isFirst){
                s[0]='+';s[1]='+';
                foundIt=true;
                isFirst=false;
            }
        }else if(s[3]=='O'&&s[4]=='O'){
            if(isFirst){
                s[3]='+';s[4]='+';
                isFirst=false;
                foundIt=true;
            }
        }
        ss.push_back(s);
    }
    if(foundIt){cout<<"YES\n";for(auto x:ss)cout<<x<<"\n";
    }else cout<<"NO\n";
    return 0;
}
