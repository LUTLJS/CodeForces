#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,d;
    long long maxi=-1;
    cin>>n>>d;
    vector<pair<int,long long>> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        int m;
        long long s;cin>>m>>s;
        a[i]={m,s};
    }
    // this one is faster than the multiset one
    sort(a.begin(),a.end());
    b[0]=a[0].first;
    for(int i=1;i<n;i++){
        // prefix sum here really helps a lot, we can get the sum of friendship in O(1)
        a[i].second+=a[i-1].second;
        b[i]=a[i].first;
    }
    vector<int>::iterator it,lob;
    // we iterate over all possibilities
    for(it=b.begin();it!=b.end();it++){
        // taking advantage of the given input d really speed up the finding process
        // d means we don't have to iterate over the whole money array a
        // it means we can quckily locate the first element that's equal to or greater than the bound
        lob=lower_bound(it,b.end(),*it+d);
        if(it==b.begin()){
            maxi=max(maxi,a[lob-b.begin()-1].second);
        }else{
            maxi=max(maxi,a[lob-b.begin()-1].second-a[it-b.begin()-1].second);
        }
    }
    cout<<maxi;
    return 0;
}
