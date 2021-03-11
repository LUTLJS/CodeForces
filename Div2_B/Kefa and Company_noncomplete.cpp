#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,d;
    long long maxi=-1;
    cin>>n>>d;
    vector<pair<long long,long long>> a(n+1);
    vector<int> b(n+1);
    multiset<pair<long long,long long>> se;
    for(int i=0;i<n;i++){
        long long m,s;cin>>m>>s;
        se.insert({m,s});
    }
    int in=0;
    for(auto x:se){
        if(in==0){
            a[in]=x;b[in]=x.first;in++;
        }
        else{
            a[in]={x.first,x.second+a[in-1].second};
            b[in]=x.first;
            in++;
        }
    }
    vector<int>::iterator lob,last;
    bool first=true;
    for(int i=0;;i++){
        lob=lower_bound(b.begin()+i+1,b.end(),b[i]+d);
        if(first){last=lob;first=false;}
        else{
            if(lob<=last)break;
        }
        int he=lob-b.begin();
                if(i==0){
                    maxi=max(maxi,a[he-1].second);
                }else{
                    maxi=max(maxi,a[he-1].second-a[i-1].second);
                }
    }
    cout<<maxi;
    return 0;
}
