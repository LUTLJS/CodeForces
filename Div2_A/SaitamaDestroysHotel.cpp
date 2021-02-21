#include<bits/stdc++.h>
using namespace std;
/*
be careful don't use the same name for a variable and an array

*/
int main(){
    int n,s;cin>>n>>s;
    vector<pair<int,int>> e;
    for(int i=0;i<n;i++){
        // simply use {x,y} would work,too
        int x,y;cin>>x>>y;e.push_back(make_pair(x,y));
    }
    int sum=0;
    // iterate backward since the evelator come down from top
    //the prerequisite is that the number of floor appears in ascending ording
    for(int i=n-1;i>=0;i--){
        int a=e[i].first,b=e[i].second;
        // from last floor to the current floor, it takes s-a
        sum+=s-a;
        // once the elevator reached the current floor, update s
        s=a;
        // if elevator reaches the current floor before the passanger's arrival
        // then the elevator has to wait for b-sum time
        if(sum<b){
            int x=b-sum;
            sum+=x;
        }
        // if the last passenger was not on the floor 0, which is obviously not normally, then it would takes extra s time to reach floor 0
        if(i==0)sum+=s;
    }
    cout<<sum;
    return 0;
}
