#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int indexOfFirstOne=-1,indexOfLastOne=-1;
    for(int i=0;i<n;i++)if(a[i]==1){indexOfFirstOne=i;break;}
    for(int i=n-1;i>=0;i--)if(a[i]==1){indexOfLastOne=i;break;}
    
    if(indexOfFirstOne==-1&&indexOfLastOne==-1){cout<<0;return 0;}
    if(indexOfFirstOne==indexOfLastOne){cout<<1;return 0;}
    if(indexOfFirstOne+1==indexOfLastOne){cout<<2;return 0;}
    if(indexOfFirstOne+2==indexOfLastOne){cout<<3;return 0;}
    
    int zeros=0,ones=0;
    bool isConsecutive=false;
    for(int i=indexOfFirstOne+1;i<indexOfLastOne;i++){
        if(a[i]==0){
            if(!isConsecutive){zeros++;isConsecutive=true;}
        }else {isConsecutive=false;ones++;}
    }
    cout<<ones+zeros+2;
    return 0;
}
