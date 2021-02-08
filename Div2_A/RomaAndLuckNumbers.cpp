#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,k,total=0;cin>>n>>k;
    while(n--){
        int x,count=0;cin>>x;
        string s=to_string(x);
        for(char c:s)
            if(c=='4'||c=='7')count++;
        if(count<=k)total++;
    }
    cout<<total;
    return 0;
}
