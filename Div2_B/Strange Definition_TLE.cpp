#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int primeFactors(int num){
    vector<int> ps;
    while(num%2==0){ps.push_back(2);num/=2;}
    for(int i=3;i<=sqrt(num);i+=2)
        while(num%i==0){ps.push_back(i);num/=i;}
    if(num>2)ps.push_back(num);
    sort(ps.begin(),ps.end());
    int p=1,cnt=1;
    if(ps.size()==1)p=ps[0];
    for(int i=0;i<ps.size()-1;i++){
        if(ps[i]==ps[i+1]){
            cnt++;
            if(i+1==ps.size()-1)
                if(cnt&1)p*=ps[i];
        }
        else{
            if(cnt&1)p*=ps[i];
            cnt=1;
            if(i+1==ps.size()-1)p*=ps[i+1];
        }
    }
    return p;
}
void removePerfectSquareFactors(){
    vector<int> done(1000001);
    for(int i=0;i<a.size();i++){
        if(a[i]>1){
            if(done[a[i]]!=0)a[i]=done[a[i]];
            else{
                done[a[i]]=primeFactors(a[i]);
                a[i]=done[a[i]];
            }
        }
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            a.push_back(x);
        }
        removePerfectSquareFactors();
        vector<int> v(1000001);
        // initial d max:
        int maxi=-1;
        //cout<<"After removePerfectSquareFactors:";
        for(int x:a){
            v[x]++;
            //cout<<x<<" ";
        }
        //cout<<"\n";
        // after 1 second dmax max(cnt,odd);
        //cout<<"how many:";
        int cnt=0,odd=-1;
        for(int x:v){
            //if(x!=0)cout<<x<<" ";
            maxi=maxi<x?x:maxi;
            if(x!=0&&x%2==0)cnt+=x;
            if(x&1)odd=odd<x?x:odd;
        }
        //cout<<"\n";
        // initial  state: dmax=maxi
        // after 1 second: dmax=res
        int res=max(cnt+v[1],odd);
        int q;cin>>q;
        while(q--){
            long long w;cin>>w;
            if(w==0)cout<<maxi<<"\n";
            else cout<<res<<"\n";
        }
        a.clear();
    }
    return 0;
}
