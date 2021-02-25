#include<bits/stdc++.h>
using namespace std;
/*
Naively iterate all the elements every time a new x-y pair comes in.
*/
int main(){
    long long n,m;cin>>n>>m;
    long long a[n*n];
    for(int i=0;i<n;i++)
    // For recording the attacked positions
    for(int j=0;j<n;j++)a[i][j]=0;
    while(m--){
        long long x,y;cin>>x>>y;
        // all the elements on the x-1 row are under attack, so we mark them all
        // here just increase theirs values by one
        for(int i=0;i<n;i++)a[x-1][i]++;
        // silimar to the row situation
        for(int i=0;i<n;i++)a[i][y-1]++;
        int cnt=0;
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        // if 0, then it's not marked
        if(a[i][j]==0)cnt++;
        cout<<cnt<<"\n";
    }
    
    return 0;
}
