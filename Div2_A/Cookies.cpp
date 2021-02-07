#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    int countOdd=0,countEven=0,sum=0;
    while(n--){
        int x;cin>>x;
        if(x&1)countOdd++;
        else countEven++;
        sum+=x;
    }
    if(sum&1)cout<<countOdd;
    else cout<<countEven;
    return 0;
}
