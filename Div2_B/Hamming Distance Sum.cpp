#include<bits/stdc++.h>
using namespace std;
int cnt[200010][2];
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    string a,b;cin>>a>>b;
    long long sum=0;
    for(int i=1;i<=b.length();i++){
        if(b[i-1]=='1'){
            cnt[i][1]=cnt[i-1][1]+1;
            cnt[i][0]=cnt[i-1][0];
        }
        else{
            cnt[i][0]=cnt[i-1][0]+1;
            cnt[i][1]=cnt[i-1][1];
        }
    }

    for(int i=0;i<a.length();i++){
        for(int j=0;j<2;j++){
            sum+=abs(a[i]-'0'-j)*(cnt[b.length()-a.length()+i+1][j]-cnt[i][j]);
        }
    }
    cout<<sum;
    return 0;
}
