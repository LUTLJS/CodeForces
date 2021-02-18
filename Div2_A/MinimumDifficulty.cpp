#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // here we don't set the first difficulty as the initial minimum difficulty
    // simply use the large enough int will ensure the mi gets the first real difficulty
    int mi=(int)1e9;
    for(int i=1;i<n-1;i++){
        int dif=0,ma=0;
        for(int j=1;j<n;j++){
            if(j==i){
                // skip the removed element
                dif=a[j+1]-a[j-1];
                j++;
            }else{
                dif=a[j]-a[j-1];
            }
            // get the difficulty
            ma=max(ma,dif);
        }
        // get the minimum difficulty among all options
        mi=min(mi,ma);
    }
    // don't forget output the result
    cout<<mi;
    return 0;
}
