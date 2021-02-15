#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int p,n;cin>>p>>n;
    int a[p];
    for(int i=0;i<p;i++)a[i]=0;
    int count=0;
    while(n--){
        int x;cin>>x;
        if(a[x%p]==0){count++;a[x%p]++;}
        else{cout<<count+1;return 0;}
    }
    cout<<-1;
    return 0;
}
