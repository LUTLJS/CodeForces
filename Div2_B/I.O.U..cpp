#include<bits/stdc++.h>
using namespace std;
/*
Implement the process and find ways to store the infomation that's going to be useful for future.
*/
int main(){
    int n,m;cin>>n>>m;
    // a for someone who owes others some money
    /*
    b: indexes for people whom someone owes money, elements would be the total he gets
    c: the debt
    */
    int a[m],b[101]={},c[m];
    int sum=0;
    for(int i=0;i<m;i++){
        int x,y,z;cin>>x>>y>>z;
        a[i]=x;b[y]+=z;c[i]=z;sum+=z;
    }
    for(int i=0;i<m;i++){
        // people a[i] whom someone owes money 
        if(b[a[i]]!=0){
            sum-=min(c[i],b[a[i]]);
            b[a[i]]-=min(c[i],b[a[i]]);
        }
    }
    cout<<sum;
    return 0;
}
