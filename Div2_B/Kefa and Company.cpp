#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,d;
    long long maxi=-1;
    cin>>n>>d;
    vector<pair<long long,long long>> a(n);
    vector<int> b(n);
    multiset<pair<long long,long long>> se;
    for(int i=0;i<n;i++){
        long long m,s;cin>>m>>s;
        se.insert({m,s});
    }
    int in=0;
    for(auto x:se){
        b[in]=x.first;
        if(in==0){
            a[in]=x;in++;
        }
        else{
            a[in]={x.first,x.second+a[in-1].second};
            in++;
        }
    }
    vector<int>::iterator it,lob;
    for(it=b.begin();it!=b.end();it++){
        lob=lower_bound(it,b.end(),*it+d);
        if(it==b.begin()){
            maxi=max(maxi,a[lob-b.begin()-1].second);
        }else{
            maxi=max(maxi,a[lob-b.begin()-1].second-a[it-b.begin()-1].second);
        }
    }
    cout<<maxi;
    return 0;
}
