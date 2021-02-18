#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            int e;cin>>e;a[i]==e;
        }
        int b[n];
        for(int i=0;i<n;i++){
            b[i]=i;
        }
        for(int i=1;i<n;i++){a[i]+=a[i-1];b[i]+=b[i-1];}
        bool yes=true;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                yes=false;
                break;
            }
        }
        if(yes)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
