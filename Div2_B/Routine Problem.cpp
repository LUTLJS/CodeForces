#include<bits/stdc++.h>
using namespace std;
/*
gcd and lcm 
This is where gcd and lcm got appllied.
This is where gcd and lcm show their powers.
*/
int main(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    int a1=a,b1=b,c1=c,d1=d;
    int x=lcm(a,c);
    b*=x/a,d*=x/c;
    //cout<<"new:"<<a<<" "<<b<<" "<<c<<" "<<d<<" \n";
    if(b==d){cout<<"0/1";}
    else if(b>d){
        int y=gcd(b,d);
        b/=y;d/=y;
        cout<<b-d<<"/"<<b;
    }else{
        int z=lcm(b1,d1);
        a1*=z/b1;c1*=z/d1;
        //cout<<"a:"<<a1<<" c:"<<c1<<"\n";
        int w=gcd(a1,c1);
        a1/=w;c1/=w;
        cout<<a1-c1<<"/"<<a1;
    }
    return 0;
}
