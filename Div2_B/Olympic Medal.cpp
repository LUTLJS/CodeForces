#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    vector<int> r1,p1,p2;
    int n;cin>>n;
    for(int i=0;i<n;i++){int x;cin>>x;r1.push_back(x);}
    sort(r1.begin(),r1.end());
    int m;cin>>m;
    for(int i=0;i<m;i++){int x;cin>>x;p1.push_back(x);}
    int k;cin>>k;
    for(int i=0;i<k;i++){int x;cin>>x;p2.push_back(x);}
    sort(p2.begin(),p2.end());
    long long A,B;cin>>A>>B;
    double maxi=-1.0;
        for(int j=0;j<m;j++){
                maxi=max(maxi,B*p1[j]*r1[r1.size()-1]*r1[r1.size()-1]/(A*p2[0]+B*p1[j]+.0));
        }
    cout<<fixed<<setprecision(8)<<sqrt(maxi);
    return 0;
}
