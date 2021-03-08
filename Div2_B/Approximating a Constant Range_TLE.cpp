#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int finalboss=-1;
    for(int i=0;i<n;i++){
        int maxi=a[i],mini=a[i];
        finalboss=finalboss<1?1:finalboss;
        for(int j=i+1;j<n;j++){
            maxi=maxi<a[j]?a[j]:maxi;
            mini=mini>a[j]?a[j]:mini;
            if(maxi-mini<=1)finalboss=finalboss<j-i+1?j-i+1:finalboss;
        }
    }
    cout<<finalboss;
    return 0;
}
