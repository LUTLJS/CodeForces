#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,m;cin>>n>>m;
    int a[n][m],b[n][m];
    vector<int> A[m],B[m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)cin>>a[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)cin>>b[i][j];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
            A[i].push_back(a[j][i]);
            B[i].push_back(b[j][i]);
        }
    vector<int> res;
    for(int i=0;i<m;i++){
        vector<int> ta=A[i],tb=B[i];
        bool y=true;
        for(int j=0;j<m;j++){
            if(ta[j]!=tb[j]){y=false;break;}
        }
        if(y)continue;
        sort(ta.begin(),ta.end());
        for(int j=0;j<m;j++)
            if(ta[j]!=tb[j]){cout<<"-1";return 0;}
        res.push_back(i+1);
    }
    cout<<res.size()<<"\n";
    for(int x:res)cout<<x<<" ";
    return 0;
}
