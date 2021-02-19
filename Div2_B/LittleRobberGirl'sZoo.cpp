
#include<bits/stdc++.h>
using namespace std;
/*
it tells us that we are allowed to use any length of segment, while here we just only use length 2 of segment,
since the number of elements is small. here use bubble sort: a whole iteration finds the largest element of the 
current array, sso the complexity is O(n^2).
any even length of segment could be tricky, so we'd better just length 2.
that would be enough.
when you first look at this problem, you try really hard, how the hell am I going to do to solve this,
simply thinking that this could be done more efficientlly, while the simplest one is just use quadratic sortint method.
so what we could learn from this problem is that we don't have always avoid so-called-less-efficient method to help us 
problems. Sometimes the most time-consuming ones could do it really well.
*/
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                cout<<j+1<<" "<<j+2<<"\n";
            }
        }
    }
    return 0;
}
