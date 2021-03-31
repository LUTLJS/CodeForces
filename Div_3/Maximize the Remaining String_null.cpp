#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
       string s;cin>>s;
       bool visited[256]={};
       priority_queue<int> c1[256],c2[256];
       for(int i=0;i<s.length();i++){
           c1[s[i]].push(i);
           c2[s[i]].push(-i);
       }
       int in;
       string left="";
       for(int i='z';i>='a';i--){
           if(c2[i].size()>0){in=-(c2[i].top());break;}
       }
       cout<<"in:"<<in<<"\n";
       for(int i=0;i<in;i++){
           char c=s[i];
           if(!visited[c]){
                visited[c]=true;
                if(c1[c].top()<in)
                left+=c;
           }
       }
       for(int i=0;i<256;i++)visited[i]=false;
       left+=s[in];
       visited[s[in]]=true;
       for(int i=in;i<s.length();i++){
           char c=s[i];
           if(!visited[c]){
               visited[c]=true;
               left+=c;
           }
       }
       cout<<left<<"\n";
    }
    return 0;
}
