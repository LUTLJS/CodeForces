#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int a,b,c,d;cin>>a>>b>>c>>d;
    int Misha=max(3*a/10,a-a/250*c), Vasya=max(3*b/10,b-b/250*d);
    if(Misha>Vasya)cout<<"Misha";
    else if(Misha<Vasya)cout<<"Vasya";
    else cout<<"Tie";
    return 0;
}
