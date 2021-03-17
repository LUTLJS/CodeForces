#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t;cin>>t;
    int ind=1;
    while(t--){
        int n;cin>>n;
        int a[n][n];
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int x;cin>>x;
                a[i][j]=x;
            }
        }
        for(int i=0;i<n;i++)sum+=a[i][i];
        int cntrow=0,cntcol=0;
        for(int i=0;i<n;i++){
            set<int> r,c;
            for(int j=0;j<n;j++){
                r.insert(a[i][j]);
                c.insert(a[j][i]);
            }
            if(r.size()!=n)cntrow++;
            if(c.size()!=n)cntcol++;
        }
        cout<<"Case #"<<ind++<<": "<<sum<<" "<<cntrow<<" "<<cntcol<<"\n";
    }
    return 0;
}
