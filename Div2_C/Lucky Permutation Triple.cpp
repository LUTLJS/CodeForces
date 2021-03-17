#include<bits/stdc++.h>
using namespace std;
/*
the given input ai+bi=bi mod n can be transformed into this Eai+Ebi=Eci mod n
So this eliminate the impossible n, then how do we print them?
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    if(!(n&1)){cout<<-1;return 0;}
    for(int i=0;i<n;i++)cout<<i<<" ";
    cout<<"\n";
    for(int i=0;i<n;i++)cout<<i<<" ";
    cout<<"\n";
    for(int i=0;i<n;i++)cout<<2*i%n<<" ";
    return 0;
}
