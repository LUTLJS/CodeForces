#include<bits/stdc++.h>
using namespace std;
vector<int> vv(1000001);
int process(int x){
    // this is called dp, reuse the result that we already processed.
  // Those who cannot remember the past are condemned to repeat itself.
    if(vv[x]!=0)return vv[x];
    else{
        int cnt=0;
        for(int i=1;i<=(int)sqrt(x);i++){
            if(x%i==0&&x/i==i)cnt++;
            else if(x%i==0)cnt+=2;
        }
        vv[x]=cnt;
        return cnt;
    }
}
int main(){
    int a,b,c;cin>>a>>b>>c;
    long long sum=0;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                sum+=process(i*j*k)%1073741824;
            }
        }
    }
    cout<<sum%1073741824;
    return 0;
}
