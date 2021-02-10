#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int r,c,count=0;cin>>r>>c;
    string a[r];
    for(int i=0;i<r;i++)cin>>a[i];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            bool cannotBeEaten=false;
            if(a[i][j]=='.'){
                for(int k=0;k<c;k++){
                    if(a[i][k]=='S'){cannotBeEaten=true;break;}
                }
                if(!cannotBeEaten){count++;continue;}
                for(int k=0;k<r;k++){
                    if(a[k][j]=='S'){cannotBeEaten=false;break;}
                }
                if(cannotBeEaten)count++;
            }
        }
    }
    cout<<count;
    return 0;
}
