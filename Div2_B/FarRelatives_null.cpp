#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    pair<int,int> arr[367];
    for(int i=0;i<367;i++)arr[i]={0,0};
    while(n--){
        string s;int a,b;cin>>s>>a>>b;
        for(int i=a;i<=b;i++){
            arr[i].first++;
            if(s[0]=='F')arr[i].second++;
        }
    }
    vector<pair<int,int>> v;
    for(int i=0;i<367;i++){
        if(arr[i].first!=0)v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
    for(int i=v.size()-1;i>=0;i--){
        // this is wrong because we may cut some males or females from this number, and it still is larger
        // than the smaller number
        if(v[i].first==2*(v[i].second)){cout<<v[i].first;return 0;}
    }
    cout<<0;
    return 0;
}
