#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        long long a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=i;
        }
        for(int i=1;i<n;i++){
            a[i]+=a[i-1];b[i]+=b[i-1];
        }
        bool notGood=false;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                notGood=true;
                break;
            }
        }
        if(notGood)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
