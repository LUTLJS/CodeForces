#include<bits/stdc++.h>
using namespace std;
int main(){
    
    ios::sync_with_stdio(false);cin.tie(nullptr);
    long long n;cin>>n;
    vector<long long> first,second;
    long long sum=0,last;
    while(n--){
      long long x;cin>>x;
      if(x>0)first.push_back(x);else second.push_back(x);
      sum+=x;
      if(n==0)last=x;
    }
    if(sum>0)cout<<"first";
    if(sum<0)cout<<"second";
    if(sum==0){
        if(first.size()<second.size()){
            for(int i=0;i<first.size();i++){
                if(first[i]>-second[i]){cout<<"first";return 0;}
                if(first[i]<-second[i]){cout<<"second";return 0;}
            }
            cout<<"second";
        }
        if(first.size()==second.size()){
            for(int i=0;i<first.size();i++){
                if(first[i]>-second[i]){cout<<"first";return 0;}
                if(first[i]<-second[i]){cout<<"second";return 0;}
            }
            if(last>0)cout<<"first";else cout<<"second";
        }
        if(first.size()>second.size()){
            for(int i=0;i<second.size();i++){
                if(first[i]>-second[i]){cout<<"first";return 0;}
                if(first[i]<-second[i]){cout<<"second";return 0;}
            }
            cout<<"first";
        }
    }
    return 0;
}
