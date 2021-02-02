#include<bits/stdc++.h>

using namespace std;

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,k,x,i=0;
    cin>>n>>k;
    int a[n];
    while(cin>>x)a[i++]=x;
    bool isFirst=true;
    int sum=0;
    for(int j=0;j<k;j++)sum+=a[j];
    int min=sum,index=0,m=0;
    for(int j=k;j<n;j++){
        sum=sum-a[m++]+a[j];
        if(min>sum){
            min=sum;
            index=m;
        }
    }
    cout<<index+1;
}
