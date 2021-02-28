#include<bits/stdc++.h>
using namespace std;
/*
Sort first, then compare.
*/
int main(){
    int n;cin>>n;
    int chars[256]={};
    string s;
    vector<string> original;
    for(int i=0;i<n;i++){
        cin>>s;
        chars[s[s.length()-1]]++;
        for(int i=0;i<s.length()-1;i++){
            chars[s[i]]++;
            string temp="";temp+=s[i];temp+=s[i+1];
            // store every pair in the array
            original.push_back(temp);
        }
    }
    // This one is for 26 letters only
    for(int i='a';i<='z';i++){
        if(chars[i]==0){cout<<(char)i;return 0;}
    }
    // We can't not just sort here because there may be a string appears more than twice
    // If we use this, we need to get rid of the redundant one
    sort(original.begin(),original.end());
    // Erase the duplicates from sorted array
    original.erase(unique(original.begin(),original.end()),original.end());
    // create a increasing order array
    vector<string> big;
    for(int i='a';i<='z';i++){
        for(int j='a';j<='z';j++){
            string temp;temp+=(char)i;temp+=(char)j;
            big.push_back(temp);
        }
    }
    int stopHere;
    for(int i=0;i<big.size();i++){
        if(i<original.size()){
            if(big[i]!=original[i]){
                cout<<big[i];return 0;
            }
        }else{stopHere=i;break;}
    }
    cout<<big[stopHere];
    return 0;
}
