#include<bits/stdc++.h>
using namespace std;
/*
due to recursive call of the process() function, it's going to take a long time under extreme conditions
*/
int cnt=0,currentHeight=0,n,h,k;
void process(int ele){
    if(currentHeight+ele>h){
        currentHeight-=k;
        if(currentHeight<0)currentHeight=0;
        cnt++;
        process(ele);
    }
}
int main(){
    cin>>n>>h>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        process(a[i]);
        currentHeight+=a[i];
    }
    cnt+=(currentHeight%k?currentHeight/k+1:currentHeight/k);
    cout<<cnt;
    return 0;
}
