#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    for(char x:s){
        if(x=='H'||x=='Q'||x=='9'){
            cout<<"YES";return 0;
        }
    }
    cout<<"NO";
    return 0;
}
