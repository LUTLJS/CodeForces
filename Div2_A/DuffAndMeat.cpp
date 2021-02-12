#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,sum=0,i=0,a,p;cin>>n>>a>>p;
    i++;sum+=a*p;
    while(i<n){
        i++;
        int b,c;cin>>b>>c;
        if(p<c)sum+=b*p;
            else{sum+=b*c;p=c;}
    }
    cout<<sum;
    return 0;
}
