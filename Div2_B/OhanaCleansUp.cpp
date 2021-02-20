#include<bits/stdc++.h>
using namespace std;
/*
find out the maximum number of columns with same 01 configurations
maximum number of columns that are the same
*/
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    string s[n];
    for(int i=0;i<n;i++)cin>>s[i];
    int ma=-1;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=0;j<n;j++){
            // exclude the subject itself by using j!=i
            if(j!=i&&s[i]==s[j])count++;
        }
        ma=max(ma,count);
    }
    cout<<ma;
    return 0;
}
