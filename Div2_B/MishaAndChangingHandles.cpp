#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int q;cin>>q;
    // store the old-new name pair
    map<string,string> edges;
    // store the unique new names
    // in case they change it back
    set<string> nonBegin;
    while(q--){
        string OLD,NEW;
        cin>>OLD>>NEW;
        edges[OLD]=NEW;
        nonBegin.insert(NEW);
    }
    vector<pair<string,string>> ans;
    for(map<string,string>::iterator it=edges.begin();it!=edges.end();it++){
        // check if they change it back
        // if they did, then the following operations are not needed
        if(nonBegin.count(it->first))continue;
        string cur=it->first;
        // find the final new name
        // someone change his/her several times
        while(edges.count(cur))cur=edges[cur];
        ans.push_back({it->first,cur});
    }
    cout<<ans.size()<<"\n";
    for(pair<string,string> x:ans)cout<<x.first<<" "<<x.second<<"\n";
    
    return 0;
}
