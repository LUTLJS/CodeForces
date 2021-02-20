#include<bits/stdc++.h>
using namespace std;
/*
Instead of adding all kinds of conditional statements inside the loop,
just add the found character to result string would save much work

*/
int main(){
    // so we create a res string here, to store the found character
    string s="hello",ss,res="";cin>>ss;
    // "start" here to guide the inner loop,
    // means the next innerr loop operation should begin right where it's left off
    int start=0;
    for(int i=0;i<5;i++){
        char c=s[i];
        for(int j=start;j<ss.length();j++){
            if(c==ss[j]){
              // found one, so store it and update the start value for next time use
              start=j+1;
              res+=c;break;
            }
        }
    }
    // if we found all "hello" according to our rules, then output yes apparrently.
    cout<<(res==s?"YES":"NO");return 0;
}
