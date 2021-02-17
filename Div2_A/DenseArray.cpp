#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            if(max(a[i],a[i+1])/min(a[i],a[i+1])>2){
                int curr=min(a[i],a[i+1]);
                while(true){
                    count++;
                    if(2*curr>=max(a[i],a[i+1]))break;
                    else curr*=2;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
