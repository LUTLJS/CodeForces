#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int r,c,count=0;cin>>r>>c;
    string a[r];
    bool canBeEaten[r][c];
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)canBeEaten[i][j]=true;
    for(int i=0;i<r;i++)cin>>a[i];
    for(int i=0;i<r;i++){
        bool good=true;
        for(int j=0;j<c;j++)if(a[i][j]=='S'){good=false;break;}
        if(!good)for(int j=0;j<c;j++)canBeEaten[i][j]=false;
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            if(!canBeEaten[j][i]){
                bool good=true;
                for(int k=0;k<r;k++)if(a[k][i]=='S'){good=false;break;}
                if(good)count++;
            }else count++;
        }
    }
    cout<<count;
    return 0;
}
