#include<bits/stdc++.h>

using namespace std;

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,count=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<s.length();i++)
        if(s[i]=='1')count++;
    cout<<abs(n-count-count);
    return 0;
}
