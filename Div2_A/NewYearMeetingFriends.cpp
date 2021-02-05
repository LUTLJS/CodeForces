#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[3];
    for(int i=0;i<3;i++)cin>>a[i];
    int min=a[0];
    for(int i=1;i<3;i++)
        if(min>a[i])min=a[i];
    int max=a[0];
    for(int i=1;i<3;i++)
        if(max<a[i])max=a[i];
    cout<<max-min;
    return 0;
}
