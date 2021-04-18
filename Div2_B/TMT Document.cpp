#include<bits/stdc++.h>
/*
I tried two ways, but failed.
Until I checked out the editorial, I didn't know how to solve it.
The methodology  behind this is some sort of greedy technique.




The ith m char must have ith t char to its left to its right. Otherwise it is not possible.

*/
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;string s;cin>>s;
        vector<int> t,m;
        for(int i=0;i<n;i++){
            if(s[i]=='T')t.push_back(i);
            else m.push_back(i);
        }
        if(t.size()!=2*m.size())
        cout<<"NO\n";
        else{bool y=true;
            for(int i=0;i<m.size();i++){
                if(m[i]<t[i]||
                m[i]>t[i+m.size()])
                {y=false;break;}
            }
            if(y)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }return 0;
}
