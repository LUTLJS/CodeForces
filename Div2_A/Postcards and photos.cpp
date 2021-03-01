#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    char cur=s[0];
    int cnt=1;
    int temp_cnt=1;
    for(int i=1;i<s.length();i++){
        if(s[i]==cur){
            temp_cnt++;
            if(temp_cnt>5){
                cnt++;temp_cnt=1;
            }
        }else{
            cnt++;
            temp_cnt=1;
            cur=s[i];
        }
    }
    cout<<cnt;
    return 0;
}
