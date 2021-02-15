#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;cin>>n>>m;
    int a=n*m,d=m+n-1,count=0;
    while(a>0){
        a-=d;
        d-=2;
        count++; 
    }
    if(count&1)cout<<"Akshat";else cout<<"Malvika";
    return 0;
}
