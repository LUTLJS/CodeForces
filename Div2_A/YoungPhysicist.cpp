#include<bits/stdc++.h>

using namespace std;

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,x;
    cin>>n;
    vector<int> v;
    while(cin>>x){
        v.push_back(x);
    }
    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<v.size();i+=3)sum1+=v[i];
    if(sum1!=0){
        cout<<"NO";
        return 0;
    }else {
        for(int i=1;i<v.size();i+=3)sum2+=v[i];
        if(sum2!=0){
            cout<<"NO";
            return 0;
        }else{
            for(int i=2;i<v.size();i+=3)sum3+=v[i];
            if(sum3!=0)cout<<"NO";
                else cout<<"YES";
        }
    }
    return 0;
}
