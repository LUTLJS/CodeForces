#include<bits/stdc++.h>
using namespace std;
/*
find the first '2' in the string
first '2' is the border:
all zeros on the left side of first '2' are going to move the left of the answer string
after that, all '1's follows, and then it's the first '2' and its remaing '0's
special case: there is no '2' in the string, then it's easy. just move all '0's to the left and all '1's follow
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    string s;cin>>s;
    int firsttwo=-1;
    for(int i=0;i<s.length();i++)if(s[i]=='2'){firsttwo=i;break;}
    if(firsttwo==-1)firsttwo=s.length();
    int cntone=0;
    for(int i=firsttwo;i<s.length();i++)if(s[i]=='1')cntone++;
    int cntzero=0;
    for(int i=0;i<firsttwo;i++){
        if(s[i]=='0')cntzero++;
        if(s[i]=='1')cntone++;
    }
    for(int i=0;i<cntzero;i++)cout<<"0";
    for(int i=0;i<cntone;i++)cout<<"1";
    for(int i=firsttwo;i<s.length();i++){
        if(s[i]!='1')cout<<s[i];
    }
    return 0;
}
