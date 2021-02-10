#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v;
vector<int> awesome(vector<int> b,int i){
    int si=b.size();
    b.push_back(i);
    for(int i=0;i<si;i++)b.push_back(b[i]);
    if(i==n)return b;
    return awesome(b,i+1);
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    long long k;cin>>n>>k;
    if(n==1){cout<<1;return 0;}
    v=awesome(v,1);
    cout<<v[k-1];
    return 0;
}


