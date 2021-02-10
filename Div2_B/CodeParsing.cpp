#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string s;int x=0,y=0,i;char c;cin>>s;
    // just count the number of 'x' and 'y'
    // because the result is either all x or all y
    for(i=0;i<s.length();i++)
        if(s[i]=='x')x++;
        else y++;
    for(i=0;i<abs(x-y);i++)cout<<(c=x>y?'x':'y');
    return 0;
}
