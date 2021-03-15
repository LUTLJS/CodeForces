#include<bits/stdc++.h>
using namespace std;
/*
Break the ranges into pieces, which are integers
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int p,q,l,r;cin>>p>>q>>l>>r;
    vector<int> z,x;
    for(int i=0;i<p;i++){
        int a,b;cin>>a>>b;
        for(int j=a;j<=b;j++)z.push_back(j);
    }
    for(int i=0;i<q;i++){
        int c,d;cin>>c>>d;
        for(int j=c;j<=d;j++){x.push_back(j);}
    }
    int cnt=0;
    bool firsttime=true;
    for(int i=l;i<=r;i++){
            if(firsttime){
                for(int j=0;j<x.size();j++){
                    x[j]+=l;
                }
                firsttime=false;
            }else{
                for(int j=0;j<x.size();j++){
                    x[j]+=1;
                }
            }   
            for(int j=0;j<z.size();j++){
                bool yes=binary_search(x.begin(),x.end(),z[j]);
                if(yes){cnt++;break;}
            }
    }
    cout<<cnt;
    return 0;
}
