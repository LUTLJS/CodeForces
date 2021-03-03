#include<bits/stdc++.h>
using namespace std;
/*
How to determine if three points are collinear. Means they are on the same straight line.
tan
(y1-y0)/(x1-x0)==(y2-y0)/(x2-x0)
*/
// mark if the stormtrooper is still alive
set<pair<int,int>> s;
int cnt=0,n,x,y;

vector<pair<int,int>> a;
void process(int c,int d){
  //
    if(s.find({c,d})==s.end()){
            s.insert({c,d});
            cnt++;
            for(int i=0;i<a.size();i++){
                if(!(a[i].first==c&&a[i].second==d)&&(s.find({a[i].first,a[i].second})==s.end())){
                    double d1=sqrt((x-c)*(x-c)+(y-d)*(y-d)+.0),
                    d2=sqrt((x-a[i].first)*(x-a[i].first)+(y-a[i].second)*(y-a[i].second)+.0),
                    d3=sqrt((c-a[i].first)*(c-a[i].first)+(d-a[i].second)*(d-a[i].second)+.0);
                    if(fabs(d3-d1-d2)<=numeric_limits<double>::epsilon()*fabs(d3)
                    ||fabs(d2-d1-d3)<=numeric_limits<double>::epsilon()*fabs(d2)
                    ||fabs(d1-d2-d3)<=numeric_limits<double>::epsilon()*fabs(d1)){
                        s.insert({a[i].first,a[i].second});
                    }
                }
            }
    }
}
int main(){
    cin>>n>>x>>y;
    for(int i=0;i<n;i++){
        int e,f;cin>>e>>f;a.push_back({e,f});
    }
    for(int i=0;i<n;i++){
        process(a[i].first,a[i].second);
    }
    cout<<cnt;
    return 0;
}
