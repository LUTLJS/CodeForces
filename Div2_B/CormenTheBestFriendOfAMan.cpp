#include <bits/stdc++.h>
using namespace std;
pair<int,int> p[101];
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int sumBefore=a[0],sumAfter=a[0];
    for(int i=1;i<n;i++){
        sumBefore+=a[i];
        a[i]+=max(0,k-a[i]-a[i-1]);
        sumAfter+=a[i];
    }
    cout<<sumAfter-sumBefore<<"\n";
    for(int x:a)cout<<x<<" ";
    return 0;
}
