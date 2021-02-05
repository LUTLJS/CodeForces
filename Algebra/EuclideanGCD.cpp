#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b);
int main(){
    cout<<gcd(11,17);
    return 0;
}
int gcd(int a,int b){
    return b?:gcd(b,a%b):a;
}
