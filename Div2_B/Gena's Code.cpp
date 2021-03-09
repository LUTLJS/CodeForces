#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    string res,odd="23456789",multipleones;
    string totallens="1";
    bool haszero=false;
    while(n--){
        string s;cin>>s;
        bool found=false;
        if(s.length()==1&&s[0]=='0'){haszero=true;continue;}
        int cntone=0;
        for(char c:s){
            if(c=='1')cntone++;
            if(cntone>1)break;
            if(odd.find(c)!=string::npos){
                found=true;res=s;
                break;
            }
        }
        if(found)continue;
        else if(cntone>1)multipleones=s;
        else totallens+=s.substr(1);
    }
    if(haszero){
        cout<<0;
    }else{
        if(multipleones.length()!=0){
            cout<<multipleones<<totallens.substr(1);
        }else if(res.length()!=0){
            cout<<res<<totallens.substr(1);
        }else cout<<totallens;
    }
    return 0;
}
