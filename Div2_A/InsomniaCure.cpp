#include<bits/stdc++.h>
using namespace std;
set<int> hurt;
int d;
void cal(int num);
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int k,l,m,n;cin>>k>>l>>m>>n>>d;
    cal(k);cal(l);cal(m);cal(n);
    cout<<hurt.size();
    return 0;
}
void cal(int num){
    for(int i=1;;i++){
        if(num*i<=d)hurt.insert(num*i);
        else break;
    }
}
