#include<bits/stdc++.h>
using namespace std;
/*
just need to determine if the total number of coins of all five people can be divided by 5
watch out the special case, in which no one gets one coin, then you should print -1, which stands for "doesn't exist"
*/
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int sum=0,n=5;
    while(n--){
        int x;cin>>x;
        sum+=x;
    }
    if(sum==0){cout<<-1;return 0;}
    cout<<(sum%5?-1:sum/5);
    return 0;
}
