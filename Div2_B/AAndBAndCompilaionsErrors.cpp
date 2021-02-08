#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    long long n,a=0,b=0,c=0;cin>>n;
    long long n1=n-1,n2=n-2;
    while(n--){int x;cin>>x;a+=x;}
    while(n1--){int x;cin>>x;b+=x;}
    while(n2--){int x;cin>>x;c+=x;}
    cout<<a-b<<"\n"<<b-c;
    return 0;
}
