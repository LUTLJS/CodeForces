#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int q;cin>>q;
        while(q--){
            long long w;cin>>w;w++;
            int ma=-1;
            while(w--){
                int maxi=-1;
                vector<int> v;
                for(int i=0;i<n;i++){
                    int curr=a[i],pro=1,cnt=0;
                    for(int j=0;j<n;j++){
                        int p=lcm(curr,a[j])/gcd(curr,a[j]);
                        if(p==((int)sqrt(p))*((int)sqrt(p))){
                            pro*=a[j];cnt++;
                        }
                    }
                    v.push_back(pro);
                    if(maxi<cnt)maxi=cnt;
                }
                for(int i=0;i<v.size();i++)a[i]=v[i];
                if(ma<maxi)ma=maxi;
            }
            cout<<ma<<"\n";
        }
    }
}
