#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,count=0;cin>>n;
    string s;
    for(int r=0;r<n;r++){
        if(r&1)for(int l=0;l<n;l++)if(l&1){s+="C";count++;}else{s+=".";}
        else for(int l=0;l<n;l++)if(l&1){s+=".";}else {s+="C";count++;}
        s+="\n";
    }
    cout<<count<<"\n"<<s;
    return 0;
}
