#include<bits/stdc++.h>
using namespace std;
/*
we need to know the fact that X | Y >= X

*/
int  main(){
    int n,a=0,b=0,x;cin>>n;
    for(int i=0;i<n;i++)
        cin>>x,a|=x;
    
    for(int i=0;i<n;i++)
        cin>>x,b|=x;
    cout<<a+b;
    return 0;
}
