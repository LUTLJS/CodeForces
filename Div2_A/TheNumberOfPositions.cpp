#include<bits/stdc++.h>
using namespace std;
/*
iterate every possible position, if it meets the >=a, then we add one to the count variable

*/
int main(){
    int n,a,b;cin>>n>>a>>b;
    int count=0;
    for(int i=0;i<=b;i++){
        // there are at least a people in front of him,
        // so we need to subtract him from n-i
        if(n-i-1>=a)count++;
    }
    cout<<count;
    return 0;
}
