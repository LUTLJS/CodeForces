#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    int mini,maxi;
    if(t%7==6)mini=t/7*2+1;
    else mini=t/7*2;
    if(t%7<=2)maxi=t/7*2+t%7;
    else maxi=t/7*2+2;
    cout<<mini<<" "<<maxi;
    return 0;
}
