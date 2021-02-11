#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int max=a[n-1];
    stack<int> s;
    s.push(0);
    for(int i=n-2;i>=0;i--){
        s.push(max(0,max-a[i]+1));
        if(max<a[i])max=a[i];
    }
    while(!s.empty()){cout<<s.top()<<" ";s.pop();}
    return 0;
}


