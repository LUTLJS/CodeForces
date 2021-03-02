#include<bits/stdc++.h>
using namespace std;
/*
We store every available key in keys vector.
*/
int main(){
    int n;cin>>n;
    string s;cin>>s;
    vector<char> keys;
    int cnt=0;
    for(int i=0;i<s.length()-1;i+=2){
        char key=s[i],door=s[i+1];
        if(key!=tolower(door)){
            bool foundIt=false;
            for(int i=0;i<keys.size();i++){
                if(keys[i]==tolower(door)){
                    keys.erase(keys.begin()+i);
                    foundIt=true;
                    break;
                }
            }
            keys.push_back(key);
            if(!foundIt)cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
