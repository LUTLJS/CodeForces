#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<ll> a(n),d;
        for(int i=0;i<n;i++){
        	cin>>a[i];
        	if(i)d.push_back(a[i]-a[i-1]);
        }
        ll m=0;
        for(ll x:d)m=gcd(m,x-d[0]);
        int ok=1;
        for(ll x:a)ok&=(x<m);
        if(m==0){
        	cout<<0<<"\n";
        }else if(!ok)cout<<-1<<"\n";
        else cout<<m<<" "<<((a[1]-a[0])%m+m)%m<<"\n";
    }
    return 0;
}
