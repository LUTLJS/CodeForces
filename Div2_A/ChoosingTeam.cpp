#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,k,e,count=0;cin>>n>>k;
    while(n--){cin>>e;if((cin>>e)<=5-k)count++;}
    cout<<count/3;
    return 0;
}
