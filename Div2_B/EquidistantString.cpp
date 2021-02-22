#include<bits/stdc++.h>
using namespace std;
/*
for s and t string, if si==ti, then for this specific position i in the answer string, it could be 0 or 1, it doesn't matter:
it's only a matter of more distance or less distance for both.
But for, if si!=ti, then the answer character matters, because no matter you choose 0 or 1, the distance increase one for only one part,
so it's going to cause difference between these two distances.
So, if the number of different characters on the same positon is odd, then there is no way to find an solution.
if it's even, we can split it into two halves,choose a half from string s and choose another half from string t
*/
int main(){
    string s,t;cin>>s>>t;
    int countEquals=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=t[i])countEquals++;
    }
    if(countEquals&1){cout<<"impossible";return 0;}
    int half=countEquals/2;
    for(int i=0;i<s.length();i++){
        if(s[i]==t[i])cout<<s[i];
        else if(countEquals-->half)cout<<s[i];
        else cout<<t[i];
    }
    return 0;
}
