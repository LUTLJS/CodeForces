#include<bits/stdc++.h>
using namespace std;
/*
the slope of two diagonal lines are 1 and -1 respectively.
This is the indirect/implicit given input. And we are going to use it to help us.
given a point and a slope, we can difine a line.So,that's it.
Use these two input to sort these points into different line
Then, use combinatoircs.
*/
int main(){
    int n;
    cin>>n;
    map<pair<int,int>,int> mp;
    for(int i=1;i<n+1;i++){
        int x,y;cin>>x>>y;
        ++mp[{y-x,1}];
        ++mp[{y+x,-1}];
    }
    long long sum=0;
    for(auto [u,v]:mp){
        // c v qu 2
        sum+=v*(v-1)/2;
    }
    cout<<sum;
    return 0;
}
