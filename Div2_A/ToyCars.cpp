#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;int m=n;
    int a[n+1][n+1];
    for(int i=1;i<n+1;i++)
    for(int j=1;j<n+1;j++)
    cin>>a[i][j];
    set<int> v;
    for(int i=1;i<n+1;i++)
        for(int j=1;j<n+1;j++){
            switch(a[i][j]){
                case 1:v.insert(i);break;
                case 2:v.insert(j);break;
                case 3:v.insert(i);
                        v.insert(j);
                        break;
                default:break;
            }
        }
    cout<<n-v.size()<<"\n";
    for(int i=1;i<=n;i++){
        if(v.find(i)==v.end())cout<<i<<" ";
    }
    return 0;
}
