#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    vector<int> v(n);
    for(int& x:v)cin>>x;
    sort(v.begin(),v.end());
    int e=v[0];
    for(int i=1;i<n;i++){
        if(e<v[i]){
            cout<<v[i];
            return 0;
        }else e=v[i];
    }
    cout<<"NO";
    return 0;
}
