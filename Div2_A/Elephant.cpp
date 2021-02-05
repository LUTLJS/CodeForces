#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x;
    cin>>x;
    cout<<x/5+x%5/4+x%5%4/3+x%5%4%3/2+x%5%4%3%2;
}
