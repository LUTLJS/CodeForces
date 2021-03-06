#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,x,y;cin>>a>>x>>y;
    // first square
    int cnt=1;
    double lbx=-a/2.0,lby=0,
            rbx=a/2.0,rty=a;
    if(y<=rty){
        if(lbx<x&&x<rbx&&lby<y&&y<rty){cout<<cnt;}
        else cout<<-1;
        return 0;
    }        
    while(y>rty){
        cnt++;
        lby+=a;rty+=a;
        if(y<=rty){
            if(lbx<x&&x<rbx&&lby<y&&y<rty)cout<<cnt;
            else cout<<-1;
            return 0;
        }else{
            cnt++;
            lbx=-a;rbx=0;lby+=a;rty+=a;
            if(y<=rty){
                if(lbx<x&&x<rbx&&lby<y&&y<rty){cout<<cnt;return 0;}
            }
            cnt++;
            lbx=0;rbx=a;
            if(y<=rty){
                if(lbx<x&&x<rbx&&lby<y&&y<rty)cout<<cnt;
                else cout<<-1;
                return 0;
            }
            lbx=-a/2.0;rbx=a/2.0;
        }
    }
    return 0;
}
