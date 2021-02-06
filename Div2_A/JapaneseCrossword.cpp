#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    string s;
    cin>>n>>s;
    int j=0;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            for(j=i;j<n;j++)if(s[j]!='B')break;
            v.push_back(j-i);
            i=j;
        }
    }
    cout<<v.size()<<"\n";
    for(auto e:v)cout<<e<<" ";
    return 0;
}
