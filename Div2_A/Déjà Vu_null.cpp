/*
1: insert char a into the right position of the string s, them reverse it, compare it.
2: I can't think of another way of solving it. That is sad.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
    	string s;cin>>s;
    	int in=0;
    	bool f=false;
    	for(int i=in;i<s.length();i++){
    		string tt=s.substr(0,i)+"a"+s.substr(i);
    		string ss=tt;
    		reverse(tt.begin(),tt.end());
    		if(ss!=tt){cout<<"yes\n"<<ss<<"\n";f=true;break;}
    	}
    	if(!f)cout<<"no\n";
    }
    return 0;
}
