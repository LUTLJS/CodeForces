#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        // prefix maximum, like prefix sum, to save time for getting the maximum element of the first i elements.(1<=i<=n)
        pair<int,int> ma[n];
        // the maximum value of first one element is of course itself
        ma[0]={a[0],0};
        // the current maximum element and its corresponding index
        pair<int,int> cu={a[0],0};
        // from index 1 to n-1
        for(int i=1;i<n;i++){
            // update the maximum element and its index if a new maximum appears
            if(a[i]>cu.first){ma[i]={a[i],i};cu={a[i],i};}
            // otherwise, just store the current maximum pair, which is cu
            else ma[i]=cu;
        }
        int end=n;
        while(true){
            // print the elements starting from maximum value's index to the end of the remaining array
            for(int i=ma[end-1].second;i<end;i++)cout<<a[i]<<" ";
            if(ma[end-1].second==0){
                cout<<"\n";
                break;
            }else {
                // cut out the printed elements
                end=ma[end-1].second;
            }
        }
    }
    return 0;
}
