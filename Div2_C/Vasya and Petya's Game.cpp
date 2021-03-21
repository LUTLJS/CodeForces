#include<bits/stdc++.h>
using namespace std;
/*
the hell is going on?
*/
int main(){
    int n;cin>>n;
    vector<int> isprime(n+1,true);
    isprime[0]=isprime[1]=0;
    /*
    4 9 16 25 36 49....
    2 3 4 5 6 7 8 9 
    */
    for(int i=2;i*i<=n;i++){
        if(isprime[i]){
            for(int j=i*i;j<=n;j+=i){
                isprime[j]=false;
            }
        }
    }
    vector<int> ans;
    for(int i=1;i<=n;i++){
        if(isprime[i]){
            int q=1;
            while(q<=n/i){
                q*=i;
                ans.push_back(q);
            }
        }
    }
    cout<<ans.size()<<"\n";
    for(auto x:ans)cout<<x<<" ";
    return 0;
}
