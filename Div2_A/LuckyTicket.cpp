#include<bits/stdc++.h>
using namespace std;
//be careful about overflow if you try to get an integer from std input 
// because the second one could be really large

int main(){
    int n;cin>>n;
    string s;cin>>s;
    for(char x:s)if(x!='4'&&x!='7'){cout<<"NO";return 0;}
    int firstHalf=0,secondHalf=0;
    for(int i=0;i<n;i++){
        if(i<n/2)firstHalf+=s[i]-'0';
        else secondHalf+=s[i]-'0';
    }
    cout<<(firstHalf==secondHalf?"YES":"NO");
    return 0;
}
