#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,d;cin>>n>>d;
    pair<long long,long long> a[n],b[n];
    for(int i=0;i<n;i++){
        long long m,s;cin>>m>>s;
        a[i]={m,s};
        b[i]={s,m};
    }
    sort(b,b+n);
    sort(a,a+n);
    long long sum1=0,sum2=0,sum3=0;
    long long cur=a[0].first,right;
    for(int i=n-1;i>=0;i--)
        if(a[i].first-cur<d){right=i;break;}
    for(int i=0;i<=right;i++)sum1+=a[i].second;
    cur=a[n-1].first;
    long long left;
    for(int i=0;i<n;i++)
        if(cur-a[i].first<d){left=i;break;}
    for(int i=left;i<n;i++)sum2+=a[i].second;
    left=-1;right=-1;
    for(int i=0,j=n-1;i<n/2;i++,j--){
        if(a[j].first-a[i].first<d){left=i;right=j;}
    }
    if(left==-1)sum3=b[n-1].first;
    else{
        for(int i=left;i<=right;i++)sum3+=a[i].second;
    }
    cout<<max(max(sum1,sum2),sum3);
    return 0;
}
