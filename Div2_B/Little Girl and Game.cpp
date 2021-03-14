#include<bits/stdc++.h>
using namespace std;
/*
This is an implementation problem.
Just translate the statement into code.
And you will get the result.
Count the alphbets that have odd number of occurences.
For every step, we want them to act optimally well, means we don't want our rivalry to win.
means we need to make the number of some letters be odd, that way it's not palindrome, which means our rivalry doesn't win.
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    string s;cin>>s;
    int chars[256]={};
    for(int i=0;i<s.length();i++){
        chars[s[i]]++;
    }
    vector<pair<char,int>> odd,even;
    for(int i='a';i<='z';i++){
        if(chars[i]&1)odd.push_back({(char)i,chars[i]});
        else if(chars[i]!=0)even.push_back({(char)i,chars[i]});
    }
    bool first=true,firstturn=true;
    while(odd.size()>1){
        if(even.size()!=0){
            pair<char,int> p=even[even.size()-1];
            even.erase(even.end()-1);
            odd.push_back({p.first,p.second-1});
        }else{
            pair<char,int> p=odd[odd.size()-1];
            if(p.second!=1)
                even.push_back({p.first,p.second-1});
            odd.erase(odd.end()-1);
        }
        if(firstturn){first=false;firstturn=false;}
        else{first=true;firstturn=true;}
    }
    cout<<(first?"First":"Second");
    return 0;
}
