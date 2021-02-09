
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    int c[100001];
    for(int i=0;i<100001;i++)c[i]=0;
    // calculate the number of stores that offer drink of x price per bottle
    for(int i=0;i<n;i++){
        int e;cin>>e;
    // here we use the price as the index of the array
    // this way, it's already in non-decending order
        c[e]++;
    }
    // get the prefix sum
    // this way it's very easy to get the total number of stores where you can afford to
    // buy a drink.
    // because you can either use less or equal amount money that you have
    for(int i=1;i<100001;i++)c[i]+=c[i-1];
    
    int q;cin>>q;
    for(int i=0;i<q;i++){
        int m;cin>>m;
    // don't forget m could be out of bound 
        if(m>100000)cout<<n<<"\n";
    // even though m could not be the exact price stores offer, the prefix
    // sum solve the problem.
    // not all indexes, which are prices, from c array are offered by the stores
    // then, the numbers of stores corresponding to these prices are zeros
        else cout<<c[m]<<"\n";
    }
    return 0;
}
