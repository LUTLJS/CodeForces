#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int r,b,d;cin>>r>>b>>d;
        if(r<b)swap(r,b);
        //r>b
        int di=r-b;
        int e=di/b;
        if(di%b)e++;
        if(e>d)cout<<"NO\n";else cout<<"YES\n";
    }
    return 0;
}
