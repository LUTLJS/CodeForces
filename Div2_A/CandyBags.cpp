#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int start=1,end=n*n,m=n;
    while(m--){
        for(int i=start;i<start+n/2;i++)cout<<i<<" ";
        for(int i=end;i>end-n/2;i--)cout<<i<<" ";
        start+=n/2;
        end-=n/2;
        cout<<"\n";
    }
    return 0;
}
