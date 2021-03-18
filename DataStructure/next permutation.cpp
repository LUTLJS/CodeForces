#include<bits/stdc++.h>
using namespace std;
/*
sort the array before doing something about it.
Otherwise you won't get all of them since this is what next_permutation means.
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    do{
        for(auto x:a)cout<<x<<" ";
        cout<<"\n";
    }while(next_permutation(a,a+n));
    
    return 0;
}
