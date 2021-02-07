#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int a,b,c,d,e,f,g,h,i;
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
    cout<<h-c+(g+c)/2<<" "<<b<<" "<<c<<"\n";
    cout<<d<<" "<<(g+c)/2<<" "<<f<<"\n";
    cout<<g<<" "<<h<<" "<<b+(g+c)/2-g;
    return 0;
}
