#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b);
int main(){
    cout<<gcd(11,17);
    cout<<lcm(20,25);
    return 0;
}
int gcd(int a,int b){
    return b?:gcd(b,a%b):a;
}
int lcm(int a,int b){
    return a/gcd(a,b)*b;
}
