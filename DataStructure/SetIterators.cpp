#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s1,s2;
    s1.insert(1);s2.insert(2);
    set<int>::iterator it1=s1.begin();
    auto it2=s2.begin();
    cout<<*it1<<" "<<*it2<<" ";
    for(auto it=s1.begin();it!=s1.end();it++)cout<<*it<<" ";
    auto it=s1.end();it--;
    cout<<*it<<" ";
    it=s1.find(0);
    if(it!=s1.end())cout<<"Yeah, I'm here.";
    return 0;
}
