#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;cin>>a>>b;
    int k=0;
    for(int i=0;i<a.length();i++){
        if(k==b.size())break;
        if(a[i]==b[k])++k;
    }
    if(k==b.size()){cout<<"automaton";return 0;}
    sort(a.begin(),a.end());sort(b.begin(),b.end());
    if(a==b){cout<<"array";return 0;}
    k=0;
    for(int i=0;i<a.length();i++){
        if(k==b.size())break;
        if(a[i]==b[k])++k;
    }
    if(k==b.size()){cout<<"both";return 0;}
    cout<<"need tree";
    return 0;
}
