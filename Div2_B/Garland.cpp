#include<bits/stdc++.h>
using namespace std;
/*
understand the description clearly is the key part for solving this
*/
int main(){
    string s1,s2;cin>>s1>>s2;
    int c1[256],c2[256];
    // initializing c1 and c2 for future use
    for(int i=0;i<256;i++){c1[i]=0;c2[i]=0;}
    // calculate how many pieces of paper of specific color for string s1 and string s2
    for(int i=0;i<s1.length();i++)c1[s1[i]]++;
    for(int i=0;i<s2.length();i++)c2[s2[i]]++;
    int count=0;
    for(int i=0;i<256;i++){
        // if the garland requires some colors that he doesn't have,then the answer is no
        if(c2[i]!=0&&c1[i]==0){cout<<-1;return 0;}
        // if both s1 and s2 have it, then pick the smaller one since it's the maximum you can have,
        // you are not going to make things up without any real materials
        if(c2[i]!=0&&c1[i]!=0)count+=min(c2[i],c1[i]);
    }
    cout<<count;
    return 0;
}
