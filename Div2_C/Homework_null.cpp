#include <bits/stdc++.h>
using namespace std;
char girls[255];
pair<int,int> hey[26];
bool vis[26];
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string s;getline(cin,s);
    int len=s.length();
    for(int i=0;i<len;i++)
        hey[s[i]-'a'].first++;
    for(int i=0;i<26;i++)
        hey[i].second=i;
    sort(hey,hey+26);
    int sum=0;;
    for(int i=sum=0;i<26;i++){
        sum+=hey[i].first;
        if(sum>k)break;
        vis[hey[i].second]=1;
        if(i==25)ha=true;
    }
    if(ha){cout<<0;return 0;}
    return 0;
}
