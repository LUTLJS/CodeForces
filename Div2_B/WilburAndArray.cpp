#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,t=0;cin>>n;long long count=0;
    while(n--){
        int e;cin>>e;
        if(t!=e){
            count+=abs(e-t);
            t=e;
        }
    }
    cout<<count;
    return 0;
}
