#include<bits/stdc++.h>
using namespace std;
pair<long long,long long> a[100001];
int n,d;
long long maxi=-1;
map<pair<int,int>,int> mp;
void process(int left,int right){
    if(a[right].first-a[left].first<d){
        if(left==0){
            maxi=max(maxi,a[right].second);
        }else{
            maxi=max(maxi,a[right].second-a[left-1].second);
        }
    }
    else{   
        if(mp[{left+1,right}]==0){
            mp[{left+1,right}]++;
            if(a[right].second-a[left].second>maxi)
            process(left+1,right);
        }
        if(mp[{left,right-1}]==0){
            mp[{left,right-1}]++;
            if(left==0){
                if(a[right-1].second>maxi)process(left,right-1);
            }else{
                if(a[right-1].second-a[left-1].second>maxi)process(left,right-1);
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    cin>>n>>d;
    multiset<pair<long long,long long>> se;
    for(int i=0;i<n;i++){
        long long m,s;cin>>m>>s;
        se.insert({m,s});
    }
    int in=0;
    for(auto x:se){
        if(in==0)
        a[in++]=x;
        else{
            a[in]={x.first,x.second+a[in-1].second};
            in++;
        }
    }
    ++mp[{0,n-1}];
    process(0,n-1);
    cout<<maxi;
    return 0;
}
