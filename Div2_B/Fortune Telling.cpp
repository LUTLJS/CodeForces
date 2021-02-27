#include<bits/stdc++.h>
using namespace std;
int main(){
    // the answer depends on how many odd numbers it has
    // miniOdd is here in case the number of odd numbers is even
    int n,countOdds=0,miniOdd=101,sum=0,x;
    cin>>n;
    while(n--){
        scanf("%d",&x);
        if(x&1){
            countOdds++;
            if(miniOdd>x)miniOdd=x;}
        sum+=x;
    }
    // no odds, no answer
    if(countOdds==0){cout<<0;return 0;}
    // the number of odd numbers is odd, so get them all, which is sum
    if(countOdds&1){cout<<sum;return 0;}
    // eliminate the minimum odd to get maximum possible sum
    else cout<<sum-miniOdd;
    return 0;
} 
