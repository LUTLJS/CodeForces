#include<bits/stdc++.h>
using namespace std;
/*
This is too easy.
But it is simple to write code in AtCoder.
*/
int main(){
	string s;cin>>s;
  	for(int i=0;i<s.length();i++){
    	if(i&1){
        	if(s[i]<='z'&&s[i]>='a'){cout<<"No";return 0;}
        }else{
        	if(s[i]<='Z'&&s[i]>='A'){cout<<"No";return 0;}
        }
    }
  	cout<<"Yes";
  	return 0;
}
