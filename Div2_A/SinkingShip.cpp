#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    string captain="",wo="",man="";
    while(n--){
        string a,b;cin>>a>>b;
        if(b=="rat")cout<<a<<"\n";
        if(b=="captain")captain=a;
        if(b=="woman")wo+=a+"\n";
        if(b=="man")man+=a+"\n";
        if(b=="child")wo+=a+"\n";
    }
    cout<<wo<<man<<captain;
    return 0;
}
