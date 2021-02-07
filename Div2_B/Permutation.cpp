#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    vector<int> v(n);
    for(int& x:v)cin>>x;
    sort(v.begin(),v.end());
    int curr=v[0],count=0;
    for(int i=1;i<n;i++){
        if(curr==v[i]){count++;v[i]=0;}
        else curr=v[i];
    }
    for(int i=0;i<n;i++)if(v[i]>n)count++;
    cout<<count;
    return 0;
}
