#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,count=0;cin>>n>>m;
    while(true){
        n--;
        count++;
        if(count%m==0)n++;
        if(n==0)break;
    }
    cout<<count;
    return 0;
}
