#include<bits/stdc++.h>

using namespace std;

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()!=s2.length()){
        cout<<"NO";
        return 0;
    }
    for(int i=0,j=s2.length()-1;j>=0;i++,j--)
        if(s1[i]!=s2[j]){
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
}
