#include<bits/stdc++.h>
using namespace std;
int primeFactors(int num){
    int cnttwo=0;
    int p=1;
    while(num%2==0){
        cnttwo++;
        num/=2;
    }
    if(cnttwo&1)p*=2;
    for(int i=3;i<=sqrt(num);i+=2){
        int cnti=0;
        while(num%i==0){
            cnti++;
            //ps.push_back(i);
            num/=i;
        }
        if(cnti&1)p*=i;
    }
    if(num>2)p*=num;
    return p;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> done(1000001),v(1000001);
        for(int i=0;i<n;i++){
            int x;cin>>x;
            //a.push_back(x);
            if(x==1){
                v[1]++;
            }else{
                if(done[x]==0){
                    done[x]=primeFactors(x);
                }
                v[done[x]]++;
            }
        }
        int maxi=-1;
        int cnt=0,odd=-1;
        for(int x:v){
            //if(x!=0)cout<<x<<" ";
            maxi=maxi<x?x:maxi;
            if(x!=0&&x%2==0)cnt+=x;
            if(x&1)odd=odd<x?x:odd;
        }
        // initial  state: dmax=maxi
        // after 1 second: dmax=res
        int res=max(cnt+v[1],odd);
        int q;cin>>q;
        while(q--){
            long long w;cin>>w;
            if(w==0)cout<<maxi<<"\n";
            else cout<<res<<"\n";
        }
    }
    return 0;
}
