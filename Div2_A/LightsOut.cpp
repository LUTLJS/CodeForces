#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int a[3],b[3],c[3];
    for(int i=0;i<3;i++)cin>>a[i];
    for(int i=0;i<3;i++)cin>>b[i];
    for(int i=0;i<3;i++)cin>>c[i];
    int x;
    cout<<(x=(a[0]+a[1]+b[0])%2?0:1);
    cout<<(x=(a[0]+a[1]+a[2]+b[1])%2?0:1);
    cout<<(x=(a[2]+a[1]+b[2])%2?0:1)<<"\n";
    
    cout<<(x=(a[0]+b[0]+c[0]+b[1])%2?0:1);
    cout<<(x=(a[1]+b[1]+b[0]+b[2]+c[1])%2?0:1);
    cout<<(x=(a[2]+b[1]+b[2]+c[2])%2?0:1)<<"\n";
    
    cout<<(x=(c[0]+c[1]+b[0])%2?0:1);
    cout<<(x=(c[0]+c[1]+c[2]+b[1])%2?0:1);
    cout<<(x=(c[1]+c[2]+b[2])%2?0:1)<<" ";
    return 0;
}
