#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;cin>>k;
    int a[12];
    for(int i=0;i<12;i++)cin>>a[i];
    sort(a,a+12);
    int cnt=0;
    for(int i=11;i>=0;i--){
        if(k>0){
            cnt++;
            k-=a[i];
        }else break;
    }
    if(k>0)cout<<-1;
    else cout<<cnt;
    return 0;
}
