#include<bits/stdc++.h>
using namespace std;
/*
We want to make sum1/n1+sum2/n2 the largest as much as possible. So we need to make sum1 and sum2 as large as possible.
Thus, we pick the first n1+n2 wealthiest people. Then swap(n1,n2) if n1>n2, because we want to make sure n1 is smaller.
Then the first n1 wealthiest people go to the city that acccommodates less people.
So sorting the elements in descending order,and calculating the prefix sum would solve the problem.
*/
int main(){
    int n,n1,n2;cin>>n>>n1>>n2;
    long long a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n,greater<long long>());
    for(int i=1;i<n;i++)a[i]+=a[i-1];
    if(n1>n2)swap(n1,n2);
    long long sum1=a[n1-1],sum2=a[n1+n2-1]-a[n1-1];
    cout<<fixed<<setprecision(8)<<sum1/(n1+.0)+sum2/(n2+.0);
    return 0;
}
