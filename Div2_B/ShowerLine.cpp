#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int x[5][5];int a,b,c,d,e,ma=0;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)cin>>x[i][j];
    for(a=0;a<5;a++)
        for(b=0;b<5;b++)
            if(b!=a)
                for(c=0;c<5;c++)
                    if(c!=a&&c!=b)
                        for(d=0;d<5;d++)
                            if(d!=a&&d!=b&&d!=c)
                                for(e=0;e<5;e++)
                                    if(e!=a&&e!=b&&e!=c&&e!=d){
                                        int t[5]={a,b,c,d,e};
                                        int sum=0;
                                        for(int i=0,j=4;i<4;i++,j--){
                                            sum+=x[t[i]][t[i+1]];
                                            sum+=x[t[j]][t[j-1]];}
                                        sum+=x[c][d]+x[d][e]+x[e][d]+x[d][c];
                                        ma=max(sum,ma);}
    cout<<ma;
    return 0;}
