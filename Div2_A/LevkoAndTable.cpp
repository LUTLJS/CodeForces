#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,k;cin>>n>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++)cout<<k/n<<" ";
        cout<<k/n+k%n<<" ";
        for(int j=i+1;j<n;j++)cout<<k/n<<" ";
        cout<<"\n";
    }
    return 0;
}
