#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    getline(cin,s);
    int count=0;
    for(char c:s){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')count++;
    }    
    if(count!=5){cout<<"NO";return 0;}
    count=0;
    getline(cin,s);
    for(char c:s){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')count++;
    }    
    if(count!=7){cout<<"NO";return 0;}
    getline(cin,s);
    count=0;
    for(char c:s){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')count++;
    }    
    if(count!=5){cout<<"NO";return 0;}
    else cout<<"YES";
    return 0;
}
