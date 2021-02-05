#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    long long sum=0;
    for(int i=0;i<n;i++){
        if(x!=1){
            sum+=(long long)a[i]*x--;
        }else sum+=a[i];
    }
    cout<<sum;
    return 0;
}
