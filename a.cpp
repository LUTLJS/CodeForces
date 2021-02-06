#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int friends[n];
        for(int i=0;i<n;i++)cin>>friends[i];
        int presents[m];
        for(int i=0;i<m;i++)cin>>presents[i];
        sort(friends,friends+n,greater<int>());
        long long sum=0;
        int start=0;
        for(int i=0;i<m;i++){
            if(i+1<=friends[i]) sum+=presents[i];
                else {start = i;break;}
        }
        if(start!=0){
        for(int i=start;i<n;i++)sum+=presents[friends[i]-1];
        }
        cout<<sum<<"\n";
    }
    return 0;
}
