#include<bits/stdc++.h>
using namespace std;
/*
This is awesome.
I was figuring out how to find out id according to a pair.It turned out I just need to make it a tuple.
The main goal here is to use lower_bound. To find the first element that is equal to or greater than the current one.
Because we want maximize the total profit, then we arrange a table for the group that pays the highest first.
But we don't want to waste our table too, so we assign a table with a capacity that is equal to or greater than the number of the group.
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    vector<tuple<int,int,int>> pay(n);
    for(int i=0;i<n;i++){
        int c,p;cin>>c>>p;
        pay[i]={p,c,i};
    }
    int k;cin>>k;
    vector<int> t(k);
    vector<vector<int>> tableid(1001);
    for(int i=0;i<k;i++){
        cin>>t[i];
        tableid[t[i]].push_back(i);
    }
    sort(pay.begin(),pay.end(),greater<tuple<int,int,int>>());
    sort(t.begin(),t.end());
    vector<int>::iterator lob;
    vector<pair<int,int>> ans;
    int money=0;
    for(int i=0;i<n;i++){
        int total=get<1>(pay[i]);
        lob=lower_bound(t.begin(),t.end(),total);
        if(lob!=t.end()){
            money+=get<0>(pay[i]);
            int cap=t[lob-t.begin()];
            int tid;
            if(tableid[cap].size()!=0){
                tid=tableid[cap][tableid[cap].size()-1];
                tableid[cap].erase(tableid[cap].end()-1);
            }
            int reid=get<2>(pay[i]);
            ans.push_back({reid+1,tid+1});
            t.erase(lob);
        }
    }
    cout<<ans.size()<<" "<<money<<"\n";
    for(auto x:ans)cout<<x.first<<" "<<x.second<<"\n";
    return 0;
}
