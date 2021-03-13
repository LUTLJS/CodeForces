#include<bits/stdc++.h>
using namespace std;
vector<int> a,g;
int n;
string res="-1";
bool process(int i,int sa,int sg,string re){
    if(i==n){
        //cout<<re<<"\n";
        if(abs(sa-sg)<=500){res=re;return false;}
        return true;
    }else{
        bool temp=process(i+1,sa+a[i],sg,re+'A');
        if(temp)
        process(i+1,sa,sg+g[i],re+'G');
        return false;
    }
}
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a.push_back(x);
        g.push_back(y);
    }
    process(0,0,0,"");
    cout<<res;
    return 0;
}
