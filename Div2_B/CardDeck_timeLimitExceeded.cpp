#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int end=n;
        while(true){
            pair<int,int> p={0,-1};
            // worst case time complexity is O(n^2), this is why this solution was judged time-limit-exceeded
            // using prefix maximum would solve this.
            for(int i=0;i<end;i++)if(a[i]>p.first)p={a[i],i};
            for(int i=p.second;i<end;i++)cout<<a[i]<<" ";
            if(p.second==0){cout<<"\n";break;}
            else end=p.second;
        }
    }
    return 0;
}
