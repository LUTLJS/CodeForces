#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
    	int n;cin>>n;
    	vector<int> b;
    	map<int,int> mp;
    	for(int i=0;i<n;i++){int x;cin>>x;mp[x]++;}
    	for(auto [u,v]:mp)cout<<u<<" ";
        for(auto [u,v]:mp){
            if(v>1)
            for(int i=0;i<v-1;i++)cout<<u<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
