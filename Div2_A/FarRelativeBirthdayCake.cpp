#include <bits/stdc++.h>
using namespace std;
const int MAX=109;
int r[MAX],l[MAX];
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,count=0;cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<n;j++){
            if(s[j]=='C'){
                count+=r[i]+l[j];
                r[i]++;l[j]++;
            }
        }
    }
    cout<<count;
    return 0;
}
