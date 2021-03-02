#include<bits/stdc++.h>
using namespace std;
/*
key type as the index, the elements as the number of unused keys.
*/
int main(){
    int n;cin>>n;
    string s;cin>>s;
    int keys[256]={};
    int cnt=0;
    for(int i=0;i<s.length()-1;i+=2){
        char key=s[i],door=s[i+1];
        keys[key]++;
        if(keys[tolower(door)]!=0)keys[tolower(door)]--;
        else cnt++;
        
    }
    cout<<cnt;
    return 0;
}
