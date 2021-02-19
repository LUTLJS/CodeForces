#include<bits/stdc++.h>
using namespace std;
// start from the frist element of the array,
/*
the first one, count one, it's the initial value of the subsequence length
then, move one to the next element, if the next ele is equal to or larger than the previous one, then count increments,
if not, just compare the current count value to tha so-far longest value,
this way, in the end,we get the longest subsequence
*/
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int b=1,ma=-1;
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1])b++;
        else{
            ma=max(b,ma);
            b=1;
        }
    }
    cout<<max(b,ma);
    return 0;
    
}
