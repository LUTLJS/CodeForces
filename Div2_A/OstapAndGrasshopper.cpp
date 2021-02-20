#include <bits/stdc++.h>
using namespace std;
/*
Initially, I tried to store where the obstacles are.
As I moved forward, it turned out I don't need the location of obstacle
*/
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,k;
    string s;
    cin>>n>>k>>s;
    int g,t;
    // find out where are g and t
    for(int i=0;i<n;i++){
        if(s[i]=='G')g=i;
        if(s[i]=='T')t=i;
    }
    // to the left
    for(int i=g-k;i>=0;i-=k){
        // since there is only one target, we can stop once we find out the target
        if(s[i]=='T'){cout<<"YES";return 0;}
        // once you hit the obstacle, you cannot move forward anymore, it's a dead end
        if(s[i]=='#')break;
    }
    // to the right
    for(int i=g+k;i<n;i+=k){
        if(s[i]=='T'){cout<<"YES";return 0;}
        // obstacle means it's a dead end, however, we leave it to the end for outputing the result
        if(s[i]=='#')break;
    }
    cout<<"NO";
    return 0;
}
