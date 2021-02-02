#include<bits/stdc++.h>

using namespace std;

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,k,x;
    cin>>n>>k;
    vector<int> v;
    while(cin>>x)v.push_back(x);
    int e=v[k-1];
    if(e==0){
        for(int i=k-2;i>=0;i--)
            if(v[i]>0) {
                cout<<i+1;
                return 0;
            }
        cout<<0;
    }else{
        int count=k;
        for(int i=k;i<v.size();i++)
            if(v[i]==e)count++;
                else{
                    cout<<count;
                    return 0;
                }
        cout<<count;
    }
}
