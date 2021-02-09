#include<bits/stdc++.h>
using namespace std;
pair<int,int> p[101];
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,count=0;string s1,s2;cin>>n>>s1>>s2;
    for(int i=0;i<n;i++)count+=min(abs(s1[i]-'0'-(s2[i]-'0')),10-abs(s1[i]-'0'-(s2[i]-'0')));
    cout<<count;
    return 0;
}
