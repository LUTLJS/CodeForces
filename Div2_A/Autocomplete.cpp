#include<bits/stdc++.h>
using namespace std;
/*
based on that fact that the first part are identical to the inputted part, we find the lexicographically smallest string
*/
int main(){
    string result,s;int n;cin>>s>>n;result=s;
    bool first=true;
    while(n--){
        string x;cin>>x;
        bool pass=true;
        if(x.length()>=s.length()){
            for(int i=0;i<s.length();i++)
                if(s[i]!=x[i]){pass=false;break;}}
        else pass=false;
        if(pass){
            if(first){result=x,first=false;}else if(result>x)result=x;}
    }
    cout<<result;
    return 0;
}
