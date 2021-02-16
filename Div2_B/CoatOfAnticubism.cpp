#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    int a[n];
    // use all known elements to form a triangle in order to require minimum additional length of rod
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // chosing the max number of the array as the longest side length could lead to minimum additional length
    // because of the generalized triangle inequality:longest length is greater than sum of two other sides.
    // thus, we need to find the largest element in the arrray
    sort(a,a+n);
    int sum=0;
    for(int i=0;i<n-1;i++)sum+=a[i];
    // all rods except the longest one form one side of the triangle, the additional rod form the third side of the triangle
    cout<<a[n-1]-sum+1;
    return 0;
}
