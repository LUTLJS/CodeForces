#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,ini=0,ind=1;cin>>n;
    for(int i=1;i<=to_string(n).length()-1;i++)ini+=1<<i;
    ini+=n%10==4?1:2;
    n/=10;
    while(n){
        ini+=n%10==4?0:(1<<ind);
        // we need ind to increment by one everytime
        ind++;
        n/=10;
    }
    cout<<ini;
    return 0;
}
