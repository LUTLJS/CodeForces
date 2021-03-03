#include<bits/stdc++.h>
using namespace std;
/*
from the very beginning of the string.
find the "bear" string
*/
int main(){
    string s,t="bear";cin>>s;
    int r=-1,i,p=0,ans=0;
    // element as a factor to determine whether the loop should be going on
    for(i=0;s[i];i++){
        if(s[i]==t[p]) p++;
        else p=s[i]==t[0];
        if(p==4){
            // once we find a new bear, we update the r
            r=i-3;p=0;
        }
        ans+=r+1;
    }
    cout<<ans;
    return 0;
}
