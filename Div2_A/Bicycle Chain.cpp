#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)cin>>b[i];
    // using the sorting functionality of the multiset, which can store elements with the same value
    multiset<int> s;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(b[i]%a[j]==0){
                s.insert(b[i]/a[j]);
            }
        }
    }
    multiset<int>::iterator it=s.end();
    it--;
    cout<<s.count(*it);
    return 0;
}
