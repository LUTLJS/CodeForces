#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    int countOdd=0,countEven=0,firstOdd=0,firstEven=0;bool isFirstOdd=true,isFirstEven=true;
    int i=1;
    while(n--){        
        int x;cin>>x;
        if(x&1){
            if(isFirstOdd){firstOdd=i++;isFirstOdd=false;}
            else i++;
            countOdd++;
        }else{
            if(isFirstEven){firstEven=i++;isFirstEven=false;}
            else i++;
            countEven++;
        }
    }
    cout<<(countEven>countOdd?firstOdd:firstEven);
    return 0;
}
