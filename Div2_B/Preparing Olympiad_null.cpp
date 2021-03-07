#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,r,x;cin>>n>>l>>r>>x;
    if(n==1){cout<<0;return 0;}
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int cnt=0;
    for(int segs=2;segs<=n;segs++){
        cout<<"segs:"<<segs<<" ";
        for(int j=0;j<=n-segs;j++){
            int dif=a[j+segs-1]-a[j];
            int sum=0;
            for(int k=j;k<j+segs;k++){
                   sum+=a[k];
            }
            cout<<"dif: "<<dif<<" sum:"<<sum<<"\n";
            if(sum>=l&&sum<=r&&dif>=x)cnt++;
        }
    }   
    cout<<cnt;
    return 0;
}
