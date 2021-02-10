#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int x=0,y=0;char c;
    while((c=getchar())!='\n')
        if(c=='x')x++;
        else y++;
    c=x>y?'x':'y';
    int e=abs(x-y);
    while(e--)cout<<c;
    return 0;
}
