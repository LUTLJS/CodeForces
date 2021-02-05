#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int c,bi,ba;
    c=bi=ba=0;
    for(int i=1;i<=n/3;i++){
        int x,y,z;
        cin>>x>>y>>z;
        c+=x;
        bi+=y;
        ba+=z;
    }
    if(n%3==1){
        int x;
        cin>>x;
        c+=x;
    }else if(n%3==2){
        int x,y;
        cin>>x>>y;
        c+=x;
        bi+=y;
    }
    int a[3]={c,bi,ba};
    if(c==*max_element(a,a+3))cout<<"chest";
    if(bi==*max_element(a,a+3))cout<<"biceps";
    if(ba==*max_element(a,a+3))cout<<"back";
    return 0;
}
