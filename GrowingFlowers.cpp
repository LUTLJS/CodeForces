#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,q,i=0,j=0;
    cin>>n>>q;
    int v[n];
    while(i<n)cin>>v[i++];
    while(j++<q){
        int x;
        cin>>x;
        if(x==2){
            int p,sum=0;
            cin>>p;
            for(int w=0;w<=n-p;w++){
                set<int> sets;
                for(int y=w;y<w+p;y++)sets.insert(v[y]);
                sum+=sets.size();
            }
            cout<<sum<<"\n";
        }else{
            int l,r,k;
            cin>>l>>r>>k;
            for(int m=l-1;m<r;m++)v[m]=k;
        }
    }
    return 0;
}

