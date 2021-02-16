#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int a,c;cin>>a>>c;
    vector<int> va,vc;
    // change it into ternary form
    while(true){
        vc.push_back(c%3);
        c/=3;
        if(c==0)break;
    }
    while(true){
        va.push_back(a%3);
        a/=3;
        if(a==0)break;
    }
    // ... va[1] va[0]
    // ... vc[1] vc[0]
    // make these two vectors have the same length if they don't 
    int oriDif=abs((int)(vc.size()-va.size()));
    if(va.size()<vc.size()){
        for(int i=0;i<oriDif;i++)va.push_back(0);
    }else if(va.size()>vc.size()) 
        for(int i=0;i<oriDif;i++)vc.push_back(0);
    // now it's certain that both va and vc have the same size
    vector<int> vb;
    // the least signaficant bit being stored from index 0
    for(int i=0;i<va.size();i++){
        // vc - va
        if(vc[i]<va[i])vb.push_back(vc[i]+3-va[i]);
        else vb.push_back(vc[i]-va[i]);
    }
    // transform the ternary form of b into decimal form
    int res=vb[0];
    for(int i=1;i<vb.size();i++){
        // calculate 3 to the power of i
        int base=3;
        for(int j=1;j<i;j++){
            base*=3;
        }
        // transform it into decimal representation
        res+=vb[i]*base;
    }
    cout<<res;
    return 0;
}
