#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int ma=a[n-1];
    a[n-1]=0;
    for(int i=n-2;i>=0;i--)
        if(ma<a[i]){ma=a[i];a[i]=0;}
        else a[i]=ma-a[i]+1;
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    return 0;
}


