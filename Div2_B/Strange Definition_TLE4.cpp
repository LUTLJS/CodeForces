#include<bits/stdc++.h>
using namespace std;
//vector<int> a;
vector<int> done(1000001);

int primeFactors(int num){
    //vector<int> ps;
    int cnttwo=0;
    int p=1;
    while(num%2==0){
        cnttwo++;
        if(done[num/2]!=0){
            if(done[num/2]%2==0)return done[num/2]/2;
            else return 2*done[num/2];
        }
        num/=2;
    }
    if(cnttwo&1)p*=2;
    for(int i=3;i<=sqrt(num);i+=2){
        int cnti=0;
        while(num%i==0){
            cnti++;
            if(done[num/i]!=0){
                if(done[num/i]%i==0)return done[num/i]/i;
                else return i*done[num/i];
            }
            //cnti++;
            num/=i;
        }
        if(cnti&1)p*=i;
    }
    if(num>2)p*=num;
    return p;
}
void makeP(){
    for(int i=2;i<1000001;i++){
        done[i]=primeFactors(i);
    }
}
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    done[1]=1;
    makeP();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(1000001);
        for(int i=0;i<n;i++){
            int x;cin>>x;
            v[done[x]]++;
        }
        // initial d max:
        int maxi=-1;
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
        //a.clear();
    }
    return 0;
}
