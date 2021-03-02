#include<bits/stdc++.h>
using namespace std;
/*
Clearly understand what these numbers stand for.
Understand their meanings.
*/
int main(){
    int m;cin>>m;
    int a[m+1];
    for(int i=1;i<=m;i++)cin>>a[i];
    int x,y;cin>>x>>y;
    for(int i=1;i<=m;i++){
        int sizeB=0,sizeI=0;
        for(int j=1;j<=m;j++){
            if(j<i)sizeB+=a[j];
            else sizeI+=a[j];
        }
        if(sizeB>=x&&sizeB<=y&&sizeI>=x&&sizeI<=y){cout<<i;return 0;}
    }
    cout<<0;
    return 0;
}
