#include<bits/stdc++.h>
using namespace std;
pair<long long,long long> a[100001];
int n,d;
long long maxi=-1;
void process(int left,int right){
    if(a[right].first-a[left].first<d){
        if(left==0){
            maxi=max(maxi,a[right].second);
        }else{
            maxi=max(maxi,a[right].second-a[left-1].second);
        }
    }
    else{
            process(left+1,right);
            process(left,right-1);
    }
}
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    cin>>n>>d;
    for(int i=0;i<n;i++){
        long long m,s;cin>>m>>s;
        a[i]={m,s};
    }
    sort(a,a+n);
    for(int i=1;i<n;i++){
        a[i].second+=a[i-1].second;
    }
    process(0,n-1);
    cout<<maxi;
    return 0;
}
