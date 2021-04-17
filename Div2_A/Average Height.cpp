#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int x;
        vector<int> v;
        while(n--){
            cin>>x;
            if(x&1)v.push_back(x);
            else cout<<x<<" ";
        }
        for(int y:v)cout<<y<<" ";
        cout<<"\n";
    }
}
