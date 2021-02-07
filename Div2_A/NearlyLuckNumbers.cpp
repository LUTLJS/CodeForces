#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string s;cin>>s;
    long long sum=0;
    for(char c:s)
        if(c=='4'||c=='7')sum++;
    s=to_string(sum);
    for(char c:s){
        if(c!='4'&&c!='7'){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
