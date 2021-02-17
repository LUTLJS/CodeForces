#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string s;cin>>s;
    string ss[10];
    for(int i=0;i<10;i++)cin>>ss[i];
    string strings8[8];int start=0;
    for(int i=0;i<8;i++){
        string res="";
        for(int j=start;j<start+10;j++){
            res+=to_string(s[j]);
        }
        start+=10;
        strings8[i]=res;
    }
    for(int i=0;i<8;i++){
        for(int j=0;j<10;j++)if(strings8[i]==ss[j]){cout<<j;break;}
    }
    return 0;
}
