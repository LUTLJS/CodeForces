#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdios(0);
    cin.tie(0);
    int n;
    cin>>n;
    if(n==1){
        cout<<"yes\n1";
        return 0;
    }
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    if(a[0]<a[1]){
        int curr=a[1];
        for(int i=2;i<n;i++){
            if(curr>a[i]){
                break;
            }
        }
    }
    for(int i=1;i<n;i++){
        if(curr<a[i]){
            curr=a[i];
        }
    }
}
