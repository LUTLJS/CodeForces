#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    // store the original indexes 
    pair<int,int> a[n+1];a[0]={0,0};
    for(int i=1;i<n+1;i++){
        int x;cin>>x;
        a[i]={x,i};
    }
    sort(a,a+(n+1));
    vector<int> v;
    for(int i=1;i<n+1;i++){
        if(a[i].first<=k){
            v.push_back(a[i].second);
            k-=a[i].first;
        }else break;
    }
    cout<<v.size()<<"\n";
    for(int x:v)cout<<x<<" ";
    return 0;
}
