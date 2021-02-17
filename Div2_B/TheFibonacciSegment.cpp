#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;int a[n];
    for(int i=0;i<n;i++)cin>>a[i];  
    if(n<=2){cout<<n;return 0;}
    int count=2,ma=2;
    for(int i=2;i<n;i++){
        if(a[i]==a[i-1]+a[i-2]){count++;
            if(i==n-1){cout<<max(ma,count);return 0;}
        }
        else{
            ma=max(ma,count);
            count=2;
        }
    }
    cout<<ma;
    return 0;
}
