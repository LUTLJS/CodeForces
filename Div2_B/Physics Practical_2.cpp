#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;cin>>n;
    int b[5002]={},c[5002]={};
    vector<int> a(n);
    for(int i=0;i<n;i++){
        int e;cin>>e;
        a[i]=e;
        b[e]++;
        c[e]++;
    }
    for(int i=1;i<5002;i++)b[i]+=b[i-1];
    for(int i=5000;i>=0;i--)c[i-1]+=c[i];
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());    
    int start=0,end=a.size()-1;
    int smallest=100001;
    for(int i=0;i<a.size();i++){
        for(int j=a.size()-1;j>=i;j--){
            if(a[j]<=2*a[i]){
                if(smallest>b[a[i]-1]+c[a[j]+1])
                smallest=b[a[i]-1]+c[a[j]+1];
                break;
            }    
        }
    }
    cout<<smallest;
    return 0;
}
