#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    long long sum=0;
    vector<pair<int,int>> left,right;
    for(int i=0;i<n;i++){
        int x,a;cin>>x>>a;
        if(x<0)left.push_back({x,a});
        else right.push_back({x,a});
    }
    sort(left.begin(),left.end());
    reverse(left.begin(),left.end());
    sort(right.begin(),right.end());
    if(left.size()==right.size()){
        for(int i=0;i<left.size();i++)sum+=left[i].second+right[i].second;
    }else if(left.size()<right.size()){
        for(auto x:left)sum+=x.second;
        for(int i=0;i<left.size()+1;i++)
        sum+=right[i].second;
    }else{
        for(auto x:right)sum+=x.second;
        for(int i=0;i<right.size()+1;i++)
        sum+=left[i].second;
    }
    cout<<sum;
    return 0;
}
