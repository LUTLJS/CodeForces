#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    // if it's odd, then we calculate it this way, don't try to reduce the length of the expression, because the / doesn't work as it works in math.
    if(n&1){if((n+1)/2*n-n/2<k){cout<<"NO";return 0;}}
    else if(n*n/2<k){cout<<"NO";return 0;}
    cout<<"YES\n";
    int cnt=0;
        for(int i=0;i<n;i++){
            if(!(i&1)){
                for(int j=0;j<n;j++){
                    if(!(j&1)){
                        if(cnt++<k)
                        cout<<"L";
                        else cout<<"S";
                    }else cout<<"S";    
                }
            }else{
                for(int j=0;j<n;j++){
                    if(!(j&1))cout<<"S";
                    else if(cnt++<k)cout<<"L";else cout<<"S";
                }
            }
            cout<<"\n";
        }
        return 0;
    
}
