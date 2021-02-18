#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    if(n==1){cout<<1;return 0;}
    cout<<"2 ";
    for(int i=3;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<"1";
    return 0;
}
