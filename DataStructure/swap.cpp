#include<bits/stdc++.h>
using namespace std;
/*

*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    swap(a[1],b[2]);
    for(int x:a)cout<<x<<" ";cout<<"\n";
    for(int x:b)cout<<x<<" ";cout<<"\n";
    return 0;
}
