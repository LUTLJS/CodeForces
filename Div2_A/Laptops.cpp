#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,p;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)cin>>p>>a[p];
    for(int i=1;i<n;i++)
        if(a[i]>a[i+1]){
            cout<<"Happy Alex";
            return 0;
        }
    cout<<"Poor Alex";
}
