#include<bits/stdc++.h>
using namespace std;
/*
This version with remove-duplicates, runs faster than the no-remove-duplicates version. 
*/
int main(){
    long long xa,ya,xb,yb;cin>>xa>>ya>>xb>>yb;
    if(xa>xb)swap(xa,xb);if(ya>yb)swap(ya,yb);
    int n;cin>>n;
    vector<tuple<long long,long long,int>> a;
    map<pair<long long,long long>,int> mp;
    for(int i=0;i<n;i++){
        long long x,y;int r;cin>>x>>y>>r;
        map<pair<long long,long long>,int>::iterator it=mp.find({x,y});
        // remove duplicates and pick the largest one
        if(it!=mp.end()){
            if(mp[{x,y}]<r){
                mp.erase(it);
                mp.insert({{x,y},r});
            }
        }else mp.insert({{x,y},r});
    }
    for(map<pair<long long,long long>,int>::iterator x=mp.begin();x!=mp.end();x++){
        a.push_back(make_tuple((x->first).first,(x->first).second,(x->second)));
    }
    long long cnt=0;
    for(long long i=xa;i<=xb;i++){
        bool onenoBlanket=false,twonoBlanket=false;
        for(int j=0;j<a.size();j++){
            long long x=get<0>(a[j]),y=get<1>(a[j]);
            int radius=get<2>(a[j]);
            double distance1=sqrt((x-i)*(x-i)+(y-ya)*(y-ya)+.0);
            double distance2=sqrt((x-i)*(x-i)+(y-yb)*(y-yb)+.0);
            if(distance1<=radius){onenoBlanket=true;}
            if(distance2<=radius){twonoBlanket=true;}
        }
        if(!onenoBlanket)cnt++;
        if(!twonoBlanket)cnt++;
    }
    for(long long i=ya+1;i<=yb-1;i++){
        bool onenoBlanket=false,twonoBlanket=false;
        for(int j=0;j<a.size();j++){
            long long x=get<0>(a[j]),y=get<1>(a[j]);
            int radius=get<2>(a[j]);
            double distance1=sqrt((x-xa)*(x-xa)+(y-i)*(y-i)+.0);
            double distance2=sqrt((x-xb)*(x-xb)+(y-i)*(y-i)+.0);
            if(distance1<=radius){onenoBlanket=true;}
            if(distance2<=radius){twonoBlanket=true;}
        }
        if(!onenoBlanket)cnt++;
        if(!twonoBlanket)cnt++;
    }
    cout<<cnt;
    return 0;
}
