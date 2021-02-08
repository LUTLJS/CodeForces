#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int m;cin>>m;
    int sq=(int)sqrt(1+8*m);
    if(sq*sq==(1+8*m)&&(sq-1)%2==0)cout<<"YES";
    else cout<<"NO";
    return 0;
}
