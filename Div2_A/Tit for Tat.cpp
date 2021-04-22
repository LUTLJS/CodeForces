#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            if(k>0){
                if(k>=a[i]){cout<<"0 ";a[n-1]+=a[i];}
                else{cout<<a[i]-k<<" ";a[n-1]+=k;}
                k-=a[i];
            }else cout<<a[i]<<" ";
        }cout<<a[n-1]<<"\n";
    }
    return 0;
}
