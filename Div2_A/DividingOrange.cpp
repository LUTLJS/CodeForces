#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,k;cin>>n>>k;
    int a[k];
    // store the original indexes that every child specified 
    for(int i=0;i<k;i++){
        int e;cin>>e;
        a[i]=e;
    }
    // use a dynamic array to store all the pieces that are left
    vector<int> left;
    for(int i=1;i<=n*k;i++){
        bool alreadyExists=false;
        // just bruce iterate all of the specified indexes
        for(int j=0;j<k;j++){
            // if i were found specified, then we ignore it
            // don't push it into the dynamic array
            if(i==a[j]){alreadyExists=true;break;}
        }
        if(!alreadyExists)left.push_back(i);
    }
    // just record where should it start for each child
    int startIndex=0;
    for(int i=0;i<k;i++){
        // the specified index
        cout<<a[i]<<" ";
        // print n-1 more elements, which are distributed
        for(int j=startIndex;j<startIndex+n-1;j++){
            cout<<left[j]<<" ";
        }
        cout<<"\n";
        // update the startIndex
        startIndex+=n-1;
    }
    return 0;
}
