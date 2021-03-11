#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> ans;
pair<long long,long long> a[100001];
int n,d;
void process(int left,int right){
    if(a[right].first-a[left].first<d){ans.push_back({left,right});}
    else{
            if(a[right-1].first-a[left].first<a[right].first-a[left+1].first){
                process(left,right-1);
            }else if(a[right-1].first-a[left].first>a[right].first-a[left+1].first){
                process(left+1,right);
            }else{
                if(a[left].second>a[right].second){
                    process(left,right-1);
                }else if(a[left].second<a[right].second){
                    process(left+1,right);
                }else process(left+1,right);
            }
            
            if(a[left].second>a[right].second){
                process(left,right-1);
            }else if(a[left].second<a[right].second){
                process(left+1,right);
            }else{
                if(a[right-1].first-a[left].first<a[right].first-a[left+1].first){
                    process(left,right-1);
                }else if(a[right-1].first-a[left].first>a[right].first-a[left+1].first){
                    process(left+1,right);
                }else{
                    process(left+1,right);
                }
            }
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
    cout<<"ordered a:\n";
    for(int i=0;i<n;i++)cout<<a[i].first<<" "<<a[i].second<<"\n";
    long long maxi=-1;
    process(0,n-1);
    for(auto x:ans){
        long long sum=0;
        for(int i=x.first;i<=x.second;i++)sum+=a[i].second;
        maxi=max(maxi,sum);
        cout<<x.first<<" "<<x.second<<"\n";
    }
    cout<<maxi;
    return 0;
}
