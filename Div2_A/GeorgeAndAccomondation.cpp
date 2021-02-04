#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,p,q,count=0;
    cin>>n;
    while(cin>>p){
        cin>>q;
        if(q-p>=2)count++;
    }
    cout<<count;
    return 0;
}
