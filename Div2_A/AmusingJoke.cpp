#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string a,b,d;cin>>a>>b>>d;
    int c[256],e[256];
    for(int i=0;i<256;i++){c[i]=0;e[i]=0;}
    for(char x:a)c[x]++;
    for(char x:b)c[x]++;
    for(char x:d)e[x]++;
    for(int i='A';i<='Z';i++)if(c[i]!=e[i]){cout<<"NO";return 0;}
    cout<<"YES";
    return 0;
}
