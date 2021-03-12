#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int cnt=0,start=0;
    for(int i=0;i<n;i++){
        for(int j=start;j<n;j++){
            if(a[i]==b[j]){
                cnt++;
                start=j+1;
                break;
            }
        }
    }
    cout<<n-cnt;
    return 0;
}
