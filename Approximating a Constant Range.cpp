#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    map<int,int> mp;
    int maxi=-1;
    for(int i=1;i<n+1;i++){
        int x;cin>>x;
        int p1=mp[x+1],p2=mp[x+2],m1=mp[x-1],m2=mp[x-2];
        if(p1==0&&p2==0&&m1==0&&m2==0) maxi=max(i,maxi);
        else{ 
            if(p1>p2&&p1>m1&&p1>m2){
                if(m1==p2) maxi=max(i,maxi);
                else maxi=max(i-max(m1,p2),maxi);
            }
            if(m1>p1&&m1>p2&&m1>m2){
                if(p1==m2) maxi=max(i,maxi);
                else maxi=max(i-max(p1,m2),maxi);
            }
        }
        mp[x]=i;
    }
    cout<<maxi;
    return 0;
}
