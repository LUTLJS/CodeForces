#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> f(n),p(m);
        for(int&x:f)cin>>x;
        for(int&x:p)cin>>x;
        sort(f.begin(),f.end(),greater<int>());
        long long sum=0;
        //j is the index of the curr present
        //for the curr friend, compare the price of the cheapest 
        // available present with the largest bound present's price
        // pick the smaller one;
        // friend with larger f[i] should get the cheapest present,
        // because its upper bound is larger,this way, at last, 
        // if the cheaper presents were already assigned, then we should 
        // give friend with smaller f[i] just money, which is equal to 
        // their upper bound.These upper bounds are smaller than that of
        // friend with larger f[i]
        for(int i=0,j=0;i<n;i++){
            if(j>=f[i]) sum+=p[f[i]-1];
            else sum+=p[j++];
        }
        cout<<sum<<"\n";
    }
    return 0;
    
}
