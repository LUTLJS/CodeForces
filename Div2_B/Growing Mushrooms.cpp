#include<bits/stdc++.h>
using namespace std;
/*
Don't forget to check whether the for includes all possible cases.
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    long long n,t1,t2,k;cin>>n>>t1>>t2>>k;
    vector<pair<long long,int>> res(n);
    for(int i=0;i<n;i++){
        long long a,b;cin>>a>>b;
        if(a<b)swap(a,b);
        if(t1*(100-k)>100*t2){
            res[i]={a*t1*(100-k)+100*t2*b,i+1};
        }else res[i]={a*100*t2+b*t1*(100-k),i+1};
    }
    sort(res.begin(),res.end(),greater<pair<long long,int>>());
    bool hasduplicates=false;
    int dupstartindex=-1;
    if(res.size()==1){
        cout<<res[0].second<<" "<<fixed<<setprecision(2)<<res[0].first/100.0<<"\n";
    }
    for(int i=0;i<res.size()-1;i++){
        if(res[i].first!=res[i+1].first){
            if(hasduplicates){
                for(int j=i;j>=dupstartindex;j--){
                    cout<<res[j].second<<" "<<fixed<<setprecision(2)<<res[j].first/100.0<<"\n";
                }
                hasduplicates=false;
            }else{
                cout<<res[i].second<<" "<<fixed<<setprecision(2)<<res[i].first/100.0<<"\n";
            }
            if(i==res.size()-2){
                cout<<res[i+1].second<<" "<<fixed<<setprecision(2)<<res[i+1].first/100.0<<"\n";
            }
        }else{
            if(!hasduplicates){
                hasduplicates=true;
                dupstartindex=i;    
            }
            if(i==res.size()-2){
                for(int j=i+1;j>=dupstartindex;j--){
                    cout<<res[j].second<<" "<<fixed<<setprecision(2)<<res[j].first/100.0<<"\n";
                }
            }
        }
    }
    return 0;
}
