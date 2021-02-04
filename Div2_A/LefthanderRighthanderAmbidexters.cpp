#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l,r,a;
    cin>>l>>r>>a;
    if(abs(l-r)<=a){
        if((a-abs(l-r))%2==1)cout<<l+r+a-1;
            else cout<<l+r+a;
    }else cout<<2*(min(l,r)+a);
    return 0;
}
