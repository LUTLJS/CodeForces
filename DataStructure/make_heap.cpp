#include<bits/stdc++.h>
using namespace std;
/*
Fast retrieval of elements of highest valuse within the range.
So when you need to know the maximum element within a range,this is what you can ask for help
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int> v(a,a+n);
    make_heap(v.begin(),v.end()-2);
    cout<<"max:"<<v.front()<<"\n";
    for(int x:v)cout<<x<<" ";cout<<"\n";
    return 0;
}
