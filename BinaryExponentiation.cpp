// for a to the power of b,
// we break b to b/2, then we use recursive method to 
// reduce the number of multiplications, which is O(log(n)).
#include<bits/stdc++.h>
using namespace std;
long long binaryExponentition(long long a, long long b);
int main(){
    cout<<binaryExponentition(2,10);
    return 0;
}
// recuisive
long long binaryExponentition(long long a, long long b){
    if(b==0) return 1;
    long long result = binaryExponentition(a, b/2);
    if(b%2) return result*result*a;
        else return result*result;
}
// simply loop
long long binExpo(long long a, long long b){
    long long res=1;
    while(b>0){
        if(b&1) res*=a;
        a*=a;
        b>>=1;
    }
    return res;
}
