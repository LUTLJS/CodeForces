#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    string s;cin>>s;
    int a=0;
    for(char c:s)if(c=='x')a++;
    if(a==n/2){cout<<0<<"\n"+s;return 0;}
    if(a<n/2){
        int count=n/2-a;
        cout<<count<<"\n";
        for(char c:s){
            if(c=='x')cout<<c;
            else if(count--)cout<<"x";
            else cout<<c;
        }
    }
    if(a>n/2){
        int count=a-n/2;
        cout<<count<<"\n";
        for(char c:s){
            if(c=='X')cout<<c;
            else if(count--)cout<<"X";
            else cout<<c;
        }
    }
    return 0;
}
