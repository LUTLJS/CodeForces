#include<bits/stdc++.h>
using namespace std;
/*
Don't naively run through numbers in the table.
Find all factors of x and determine if these pairs of factors are less than or euqal to n
*/
int main(){
    int n,x;cin>>n>>x;
    int cnt=0;
    for(int i=1;i<=(int)sqrt(x);i++){
        if(x%i==0){
            if(x/i==i&&i<=n)cnt++;
            else if(x/i<=n&&i<=n)
            cnt+=2;
        }
    }
    cout<<cnt;
    return 0;
}
