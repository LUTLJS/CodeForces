#include <bits/stdc++.h>
using namespace std;
char girls[255];
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string s;getline(cin,s);
    for(char x:s)girls[x]++;
    getline(cin,s);
    for(char x:s)girls[x]--;
    for(int i='a';i<='z';i++)if(girls[i]<0){cout<<"NO";return 0;}
    for(int i='A';i<='Z';i++)if(girls[i]<0){cout<<"NO";return 0;}
    cout<<"YES";
    return 0;
}
