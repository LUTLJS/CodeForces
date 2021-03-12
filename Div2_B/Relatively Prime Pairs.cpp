#include<bits/stdc++.h>
using namespace std;
/*
an interesting problem

*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    long long l,r;cin>>l>>r;
    cout<<"YES\n";
    while(l<=r){
        cout<<l<<" "<<++l<<"\n";
        l++;
    }
    return 0;
}
