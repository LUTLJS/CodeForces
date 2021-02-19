#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    if(n>=0){cout<<n;return 0;}
    int lastDigit=(-n)%10;
    int lastBeforeLastDigit=(-n)/10%10;
    if(lastDigit>lastBeforeLastDigit)cout<<n/10;
    else cout<<-((-n)/100*10)-(-n)%10;
    return 0;
}
