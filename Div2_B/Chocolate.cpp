#include<bits/stdc++.h>
using namespace std;
/*
Between two adjacent ones, we must have only one separation.
So, for first two ones, we have pos(i)-pos(i-1) ways to separate it.
Then the answere is the product of values pos(i)-pos(i-1)-
101->2
11->1
*/
int main(){
    int n;cin>>n;
    int a[n];
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==1)v.push_back(i);
    }
    if(v.size()==0){cout<<0;return 0;}
    long long res=1;
    for(int i=0;i<v.size()-1;i++){
        res*=v[i+1]-v[i];
    }
    cout<<res;
}
