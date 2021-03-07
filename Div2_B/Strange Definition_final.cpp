#include<bits/stdc++.h>
using namespace std;
vector<int> withoutPairsOfSamePrimeFactors(1000001);
int removePairsOfSamePrimeFactors(int num){
    //vector<int> ps;
    int cnttwo=0;
    int p=1;
    while(num%2==0){
        cnttwo++;
        if(withoutPairsOfSamePrimeFactors[num/2]!=0){
            // use the past and avoid repeat it again
            if(withoutPairsOfSamePrimeFactors[num/2]%2==0)return withoutPairsOfSamePrimeFactors[num/2]/2;
            else return 2*withoutPairsOfSamePrimeFactors[num/2];
        }
        num/=2;
    }
    if(cnttwo&1)p*=2;
    for(int i=3;i<=sqrt(num);i+=2){
        int cnti=0;
        while(num%i==0){
            cnti++;
            if(withoutPairsOfSamePrimeFactors[num/i]!=0){
                // use the past and avoid repeating it again
                if(withoutPairsOfSamePrimeFactors[num/i]%i==0)return withoutPairsOfSamePrimeFactors[num/i]/i;
                else return i*withoutPairsOfSamePrimeFactors[num/i];
            }
            //cnti++;
            num/=i;
        }
        if(cnti&1)p*=i;
    }
    if(num>2)p*=num;
    return p;
}
void get(){
    for(int i=2;i<1000001;i++){
        // remember that past
        withoutPairsOfSamePrimeFactors[i]=removePairsOfSamePrimeFactors(i);
    }
}
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    done[1]=1;
    get();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        // record elements and its corresponding occurrences
        /*
        This works so much faster than using an array
        */
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            ++mp[withoutPairsOfSamePrimeFactors[x]];
        }
        // initial d max:
        int maxi=-1;
        // after 1 second dmax=max(cnt+mp[1],maxi);
        int cnt=0;
        for(auto [u,v]:mp){
            maxi=max(maxi,v);
            if(u!=1&&v%2==0)cnt+=v;
        }
        // initial  state: dmax=maxi
        // after 1 second: dmax=res
        int res=max(cnt+mp[1],maxi);
        int q;cin>>q;
        while(q--){
            long long w;cin>>w;
            if(w==0)cout<<maxi<<"\n";
            else cout<<res<<"\n";
        }
    }
    return 0;
}
