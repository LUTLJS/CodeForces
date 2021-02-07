#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--){
        long long A,B,n;cin>>A>>B>>n;
        long long a[n],b[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        bool isDead=false;
        vector<long long> mons;
        for(int i=0;i<n;i++){
            long long e=b[i]/A, r=b[i]%A;
            B-=e*a[i];
            if(B<=0){
                if(i==n-1&&r==0){cout<<"YES\n";}
                else {cout<<"NO\n";}
                isDead=true;
                break;
            }
            if(r!=0)mons.push_back(a[i]);
        }
        if(!isDead){
            sort(mons.begin(),mons.end());
            for(int i=0;i<mons.size();i++){
                B-=mons[i];
                if(B<=0&&i<mons.size()-1){cout<<"NO\n";isDead=true;break;}
            }
            if(!isDead)cout<<"YES\n";
        }
    }
    return 0;
}
