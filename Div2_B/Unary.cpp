#include <bits/stdc++.h>
using namespace std;
// just to simply code writing
const int MOD=1000003;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    // the reason we are using base variable is that we extract 2^4, 2^8, ... ,because the unary character each stands for four binary digits.
    // just to simply avoid large number
    // here use the rule of modular operation:(a*b)%c is equals to (a%c*b%c)%c
    int base=1,ans=0;
    string s;cin>>s;
    for(int i=s.length()-1;i>=0;i--){
        int num;
        switch(s[i]){
            case '>':num=8;break;
            case '<':num=9;break;
            case '+':num=10;break;
            case '-':num=11;break;
            case '.':num=12;break;
            case ',':num=13;break;
            case '[':num=14;break;
            default:num=15;
        }
        ans=(ans+(num%MOD)*base)%MOD;
        base*=16;
        // to avoid large number, to avoid data overflow
        base%=MOD;
    }
    cout<<ans;
    return 0;
}
