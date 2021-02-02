#include<bits/stdc++.h>

using namespace std;

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s,r;
    cin>>s;
    vector<char> vs={'A','E','I','O','U','Y','y','a','e','i','o','u'};
    for(int i=0;i<s.length();i++){
        bool isV=false;
        for(auto x:vs)
            if(x==s[i]){
                isV=true;
                break;
            }
        if(!isV)r+=s[i];
    }
    for(int i=0;i<r.length();i++){
        if('A'<=r[i]&&r[i]<='Z')r[i]+=32;
        cout<<"."<<r[i];
    }
    return 0;
}
