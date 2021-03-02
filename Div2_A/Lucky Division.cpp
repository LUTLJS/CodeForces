#include<bits/stdc++.h>
using namespace std;
bool isLuckyNumber(int x){
    while(x){
        int r=x%10;
        if(r!=4&&r!=7)return false;
        x/=10;
    }
    return true;
}
int main(){
    int n;cin>>n;
    for(int i=1;i<=(int)sqrt(n);i++){
        if(n%i==0){
            int a=i,b=n/i;
            if(isLuckyNumber(a)){cout<<"YES";return 0;}
            if(isLuckyNumber(b)){cout<<"YES";return 0;}
        }
    }
    cout<<"NO";
    return 0;
}
