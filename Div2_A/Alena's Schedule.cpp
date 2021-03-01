#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int stayHome=0;
    int left1=-1,right1=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0)stayHome++;
        else{ left1=i;break;}
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==0)stayHome++;
        else{ right1=i;break;}
    }
    if(left1==-1){cout<<0;return 0;}
    int cnt=0;
    for(int i=left1;i<=right1;i++){
        if(a[i]==0){
            cnt++;
        }else{
            if(cnt>=2)stayHome+=cnt;cnt=0;
        }
    }
    cout<<n-stayHome;
    return 0;
}
