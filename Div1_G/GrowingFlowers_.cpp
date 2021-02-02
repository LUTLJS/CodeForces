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
                int count=1,o=0;
                int z[p];
                for(int y=w;y<w+p;y++)z[o++]=v[y];
                int summ=p,size=p;
                while(size>1){
                    int curr=z[0],cut=0;
                    for(int a=1;a<size;a++)
                        if(curr!=z[a])z[cut++]=z[a];
                            else summ--;
                    size=cut;
                }
                sum+=summ;
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

