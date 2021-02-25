#include<bits/stdc++.h>
using namespace std;
/*
Using brute force would solve the problem.
Be careful about integer overflow.

*/
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    long long sum=a[0];
    for(long long i=1;i<n;i++){
        sum+=1+(i+1)*(a[i]-1);
    }
    cout<<sum;
    return 0;
}
