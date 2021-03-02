#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){int x;cin>>x;a[i]=x;b[i]=x;}
    sort(a,a+n);
    vector<int> indexes;
    for(int i=0;i<n;i++)
        if(b[i]!=a[i])indexes.push_back(i);
    if(indexes.size()==0){cout<<"yes\n1 1";return 0;}
    vector<pair<int,int>> p;
    for(int i=0;i<indexes.size()-1;i++)
        if(indexes[i]+1!=indexes[i+1])p.push_back({i,i+1});
    if(p.size()==1){
        if(indexes[p[0].first]+2==indexes[p[0].second]&&(indexes.size()-1)/2==p[0].first);
        else{cout<<"no";return 0;}
    }else if(p.size()>1){cout<<"no";return 0;}
    vector<int> temp;
    for(int i=0;i<indexes.size();i++){
        temp.push_back(b[indexes[i]]);
        if(i==(indexes.size()-1)/2&&indexes[i]+2==indexes[i+1])temp.push_back(b[indexes[i]+1]);
    }
    reverse(temp.begin(),temp.end());
    bool yes=true;
    for(int i=0,j=indexes[0];i<temp.size();i++,j++)
        if(temp[i]!=a[j]){yes=false;break;}
    //for(auto x:indexes)cout<<x<<" ";cout<<"\n";
    if(yes)cout<<"yes\n"<<indexes[0]+1<<" "<<indexes[indexes.size()-1]+1;
    else cout<<"no";
    return 0;
}
