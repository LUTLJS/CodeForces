#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){int x;cin>>x;sum+=x;}
    int count=0;
    for(int i=1;i<=5;i++){
        if((sum+i)%(n+1)!=1)count++;
    }
    cout<<count;
    return 0;
}
