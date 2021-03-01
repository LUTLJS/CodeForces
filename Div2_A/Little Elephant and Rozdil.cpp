#include<bits/stdc++.h>
using namespace std;
/*
find the minimum element and record its index and the number of its appearences
could be done in O(n)
But you can solve it quickly then you can choose any means you prefer 
*/
int main(){
    int n;cin>>n;
    pair<int,int> a[n+1];
    a[0]={0,0};
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        a[i]={x,i};
    }
    sort(a,a+(n+1));
    if(n==1){cout<<a[1].second;return 0;}
    if(a[1].first==a[2].first){cout<<"Still Rozdil";}
    else cout<<a[1].second;
    return 0;
}
