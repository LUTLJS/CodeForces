#include<bits/stdc++.h>
using namespace std;
/*
We ignore some condition first to get the obvious answer, then add these extra constraints to see how to solve this.
In this case, we firstly asssum p==0, then we get the answer. Then we add p. For picking rows, we assume i times, then k-i is for picking columns.
Then the answer would be ans-(k-i)*i*p. Then we just need to iterate over i from 0 to k and pick the largest result.
How to come to ans-(k-i)*i*p is important.
In order to solve this, we need to think of it this way.
Consider p first, consider its special case, consider when p doesn't involve. When p doesn't involve, how do we make the total pleasure value maximum?
We always pick the largest one!Then we get the answer. Then if p does exist, the answer would be ans-(k-i)*i*p. i would be the times that we picked rows.
Then k-i is the times that we picked columns. The corss between column and row is why we need to subtract from the ideal ans.
We iterate over i from 0 to k to find best answer. We use two priority queue to quickly calculate ai and bi.
We calculate the special case p=0, then we always pick the largest sum, in which we picked rows for i times and picked columns for k-i times.
Then if p!=0 and i for rows, then we need to subtract a p from ans for every cross between row and column. There are (k-i)*i p we need to minus.
Picking a row and subtract a p from all elements of the row doen't affect the relations between all columns. For every column, their relations remains the same.
Assume c1>c3>c2, then the following inequality still holds:c1-p>c3-p>c2-p
*/
const long long mi=LLONG_MIN;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    long long n,m,k,p;cin>>n>>m>>k>>p;
    priority_queue<int> tpa,tpb;
    vector<int> sumcolumn(m,0);
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            int x;cin>>x;sum+=x;
            sumcolumn[j]+=x;
            if(i==n-1)tpb.push(sumcolumn[j]);
        }
        tpa.push(sum);
    }
    vector<long long> ttpa(k+1,0),ttpb(k+1,0);
    for(int i=1;i<=k;i++){
        int t=tpa.top(),tt=tpb.top();
        tpb.pop();tpb.push(tt-p*n);
        tpa.pop();tpa.push(t-p*m);
        ttpa[i]=ttpa[i-1]+t;
        ttpb[i]=ttpb[i-1]+tt;
    }
    long long maxsum=mi;
    for(int i=0;i<=k;i++){
        // when we merge, we need to subtract the corss between row and column
        maxsum=max(maxsum,(long long)(ttpa[i]+ttpb[k-i]-(k-i)*i*p));
    }
    cout<<maxsum;
    return 0;
}
