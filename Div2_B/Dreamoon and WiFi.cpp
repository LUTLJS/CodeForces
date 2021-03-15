#include<bits/stdc++.h>
using namespace std;
/*
It's about factorial of a positive number.
And it's about combinatorics.
We need relative positions to be the same.
*/
int ff[11]={1,1,2,6,24,120,720,5040,40320,362880,3628800};
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    string s1,s2;cin>>s1>>s2;
    int oriplus=0,oriminus=0;
    for(char x:s1)if(x=='+')oriplus++;else oriminus++;
    int quemark=0,plus=0,minus=0;
    for(char x:s2)if(x=='?')quemark++;else if(x=='+')plus++;else minus++;
    vector<int> ans;
    if(oriplus>oriminus){
        int dif=oriplus-oriminus;
        for(int i=0;i<=quemark;i++){
            if(plus+i-(minus+quemark-i)==dif)ans.push_back(i);
        }    
    }else{
        int dif=oriminus-oriplus;
        for(int i=0;i<=quemark;i++){
            if(minus+i-(plus+quemark-i)==dif)ans.push_back(i);
        }
    }
    int total=pow(2,quemark),pro=0;
    for(int x:ans){
        pro+=ff[quemark]/(ff[x]*ff[quemark-x]);
    }
    cout<<fixed<<setprecision(10)<<pro/(total+.0);
    return 0;
}
