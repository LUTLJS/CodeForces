#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int a,b;cin>>a>>b;
    int awin=0,tie=0,bwin=0,m=7;
    while(--m){
        if(abs(a-m)<abs(b-m))awin++;
        else if(abs(a-m)==abs(b-m))tie++;
        else bwin++;
    }
    cout<<awin<<" "<<tie<<" "<<bwin;
    return 0;
}
