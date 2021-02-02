#include<bits/stdc++.h>

using namespace std;

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,sum=0;
    cin>>n;
    string s;
    while(cin>>s)
        if(s[1]=='+')sum++;
            else sum--;
    cout<<sum;
}
