#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,t,c;cin>>n>>t>>c;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int> indexesOutOfT;
    for(int i=0;i<n;i++)if(a[i]>t)indexesOutOfT.push_back(i);
    vector<int> segmentsOfPrisonersWithinT;
    int curr=0;
    for(int i=0;i<indexesOutOfT.size();i++){
        if(i=0){
            if(indexesOutOfT[0]-0>=c)segmentsOfPrisonersWithinT.push_back(indexesOutOfT[0]);
            curr=indexesOutOfT[0];
        }else{
            if(indexesOutOfT[i]-curr-1>=c)segmentsOfPrisonersWithinT.push_back(indexesOutOfT[i]-curr-1);
            curr=indexesOutOfT[i];
        }
    }
    if(curr!=0&&n-curr>=c)segmentsOfPrisonersWithinT.push_back(n-curr);
    int ways=0;
    for(int x:segmentsOfPrisonersWithinT)ways+=x-c+1;
    cout<<ways;
    return 0;
}
