#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string s;cin>>s;
    // create an array to store the number of true so far
    // so that when we were asked how many trues are within l~r range,
    // we can simply get the difference of these two values, which is the answer.
    int v[s.length()-1];
    for(int i=0;i<s.length()-1;i++)
        // since index 0 has no previous element, so we apart v[0] from other indexes
        if(s[i]==s[i+1])
            if(i==0)v[0]=1;else v[i]=v[i-1]+1;
        else 
            if(i==0)v[0]=0;else v[i]=v[i-1];
    int m;cin>>m;
    while(m--){
        int l,r;cin>>l>>r;
        // since l could be 1, so it should be taken care of differently
        // otherwise you would get index out of bound error
        if(l==1)cout<<v[r-2]<<"\n";
        else cout<<v[r-2]-v[l-2]<<"\n";
    }
    return 0;
}
