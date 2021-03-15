#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    //for(int x:a)cout<<x<<" ";
    if(a.size()<=2){
        cout<<"YES";
    }else{
        if(a.size()==3&&(a[2]-a[0])%2==0&&a[1]==a[0]+(a[2]-a[0])/2)
            cout<<"YES";
            else cout<<"NO";
    }
    return 0;
}
