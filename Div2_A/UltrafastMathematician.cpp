#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string x,y;
    cin>>x>>y;
    for(int i=0;i<x.length();i++)
        if(x[i]!=y[i])cout<<"1";
            else cout<<"0";
    return 0;
}
