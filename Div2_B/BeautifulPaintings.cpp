#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    // array for store the number of paintings with same beauty
    int a[1001];
    // initialize all number to 0
    for(int i=0;i<1001;i++)a[i]=0;
    // calculate the number of paintings with same beauty
    for(int i=0;i<n;i++){int e;cin>>e;a[e]++;}
    // create a vector for storing number of given paintings with same beauty
    vector<int> v;
    for(int i=0;i<1001;i++)if(a[i]!=0)v.push_back(a[i]);
    // sort the number of paintings with same beauty, for future sake
    sort(v.begin(),v.end());
    // calculate the difference of every two neighbouring number, for future sake
    // and, of course, store them
    vector<int> u;
    u.push_back(v[0]);
    for(int i=1;i<v.size();i++)u.push_back(v[i]-v[i-1]);
    // prepare for counting
    int count=0;
    // in order to maximize the total beauty, we need to use the second one of the current pair of paintings to be the first one of the next pair
    for(int i=0;i<u.size();i++)count+=u[i]*(u.size()-i-1);
    cout<<count;
    return 0;
}
