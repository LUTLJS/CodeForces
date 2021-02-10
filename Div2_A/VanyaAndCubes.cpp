#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    for(int i=1,k=0;;i++){
        n-=k;
        k+=i;
        if(n<k){cout<<i-1;return 0;}
    }
    return 0;
}
