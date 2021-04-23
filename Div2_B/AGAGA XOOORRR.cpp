#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int sum=0;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum^=a[i];
        }
        if(sum==0){cout<<"YES\n";continue;}
        int cnt=0;
        for(int i=1,j;i<=n;i=j+1){
            j=i;
            int nw=a[i];
            while(j<n&&nw!=sum){
                
                
                ++j;nw^=a[j];
            }
            if(nw==sum)++cnt;
        }
        
        if(cnt>=3)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
