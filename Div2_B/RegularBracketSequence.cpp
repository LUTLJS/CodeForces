#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string s;cin>>s;
    int leftBrackets=0,count=0;
    bool foundFirstLeftBracket=false;
    for(char c:s){
        if(c=='('){
            leftBrackets++;
            foundFirstLeftBracket=true;
        }else{
            if(foundFirstLeftBracket){
                if(leftBrackets>0){
                    leftBrackets--;
                    count++;
                }else foundFirstLeftBracket=false;
            }
        }
    }
    cout<<count*2;
    return 0;
}
