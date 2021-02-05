#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> vv;
    for(int i=0;i<m;i++){
        int e;
        cin>>e;
        vv.push_back(e);
    }
    vector<int> v;
    int x;
    while(cin>>x)v.push_back(x);
    int bone=1;
    if(binary_search(vv.begin(),vv.end(),bone)){
        cout<<1;
        return 0;
    }
    for(int i=0;i<v.size()-1;i+=2){
        if(v[i]==bone){
            if(binary_search(vv.begin(),vv.end(),v[i+1])){
                cout<<v[i+1];
                return 0;
            }else if(i+2==v.size()){
                cout<<v[i+1];
                return 0;
            }else {
                bone=v[i+1];
                if(binary_search(vv.begin(),vv.end(),bone)){
                    cout<<bone;
                    return 0;
                }
            }
        }else if(v[i+1]==bone){
            bone=v[i];
            if(binary_search(vv.begin(),vv.end(),bone)){
                cout<<bone;
                return 0;
            }
        }
    }
    cout<<bone;
    return 0;
}
