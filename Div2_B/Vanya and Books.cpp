#include<bits/stdc++.h>
using namespace std;
/*
Time complexity O(n.length())
integer overflow should be awared of.
This is a math problem.
*/
typedef long long ll;
/*
If we don't use this default array, then we will have to calculate them ourselves.
But it won't take much time since the length of s is at most 10.
*/
ll pro[10]={1,10,100,1000,10000,100000,(ll)1e6,(ll)1e7,(ll)1e8,(ll)1e9};
int main(){
    // a string here just to calculate how many characters does number n have
    string s;int n,i=0;cin>>n;s=to_string(n);
    ll sum=(n-pro[s.length()-1]+1)*s.length();
    for(;i<s.length()-1;i++)
        sum+=(i==0?9:(i+1)*pro[i]*9);
    cout<<sum;
    return 0;
}
