#include<bits/stdc++.h>
using namespace std;
const long long mi=LLONG_MIN;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    long long n,m,k,p;cin>>n>>m>>k>>p;
    priority_queue<int> tpa,tpb;
    vector<int> sumcolumn(m,0);
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            int x;cin>>x;sum+=x;
            sumcolumn[j]+=x;
            if(i==n-1)tpb.push(sumcolumn[j]);
        }
        tpa.push(sum);
    }
    vector<long long> ttpa(k+1,0),ttpb(k+1,0);
    for(int i=1;i<=k;i++){
        int t=tpa.top(),tt=tpb.top();
        tpb.pop();tpb.push(tt-p*n);
        tpa.pop();tpa.push(t-p*m);
        ttpa[i]=ttpa[i-1]+t;
        ttpb[i]=ttpb[i-1]+tt;
    }
    long long maxsum=mi;
    for(int i=0;i<=k;i++){
        maxsum=max(maxsum,(long long)(ttpa[i]+ttpb[k-i]-(k-i)*i*p));
    }
    cout<<maxsum;
    return 0;
}
