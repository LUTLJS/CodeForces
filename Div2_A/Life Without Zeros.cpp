#include<bits/stdc++.h>
using namespace std;
/*
Do exactly as the statement says.
*/
int re(int x){
    int res=0;
    int tens=1;
    while(x){
        if(x%10)res+=x%10*tens,tens*=10;
        x/=10;
    }
    return res;
}
int main(){
    int a,b;cin>>a>>b;
    if(re(a)+re(b)==re(a+b))cout<<"YES";else cout<<"NO";
    return 0;
}
