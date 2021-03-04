#include<bits/stdc++.h>
using namespace std;
/*
Using recursive methods is not a good solution here, as the verdict presented time limit exceeded.
We don't try out all the possible solutions here exhaustively.
We need to store 
*/
int n,mini=1000000;
vector<int> a;
int b[5001]={};
void process(int start,int end,int total){
    if(start<n&&end>=0&&start<=end)
    if(a[end]>2*a[start]){
        process(start+b[a[start]],end,b[a[start]]+total);
        process(start,end-b[a[end]],b[a[end]]+total);
    }else{
        if(mini>total)mini=total;
    }
}
int main(){
    freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    cin>>n;
    for(int i=0;i<n;i++){
        int c;cin>>c;
        a.push_back(c);
        b[c]++;
    }
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    process(0,n-1,0);
    cout<<mini;
    return 0;
}
