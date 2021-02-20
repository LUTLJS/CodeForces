#include<bits/stdc++.h>
using namespace std;
/*
There are only two answers here, either it's 4 or 2
4 for any good cell, which is 1, on the sides 
2 for no good cell on the sides
since there is at least 1 good cell in this rectangle,if there wasn't 1 good cell on the sides, there is at least one good cell inside the rectangle
*/
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int e;cin>>e;
            // exclude all the side cells 
            if(!(i==0&&j==0)&&
            !(i==0&&j==m-1)&&
            !(i==n-1&&j==0)&&
            !(i==n-1&&j==m-1)&&
            !((i>=1&&i<=n-2)&&(j>=1&&j<=m-2))){
                // if it's good, then the answer is 2
                if(e==1){cout<<2;return 0;}
            }
        }
    }
    cout<<4;
    return 0;
}
