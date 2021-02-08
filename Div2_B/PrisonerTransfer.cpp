#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,t,c,l=0,q,res=0;cin>>n>>t>>c;
    for(int i=1;i<=n;i++){
        cin>>q;
        // note index of element whose value is greater than t
        if(q>t)l=i;
        if(l<=i-c)res++;
    }
    cout<<res;
    return 0;
}
