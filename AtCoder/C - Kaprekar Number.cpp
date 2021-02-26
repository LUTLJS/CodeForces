#include<bits/stdc++.h>
using namespace std;
/*
Maybe I shouldn't made it this complicated.
Changing int into a string then change it back to int
*/
int main(){
  int n,k;cin>>n>>k;
  int res=n;
  string s;
  for(int i=1;i<=k;i++){
    int digits[10];
    for(int m=0;m<10;m++)digits[m]=0;
  	s=to_string(res);
    // I was amazed that digits['1'] doesn't work as exactly as I expected it to be
    // digits['a'] would work
    for(int p=0;p<s.length();p++)digits[s[p]-'0']++;
    string ma="",mi="";
    for(int j=1;j<10;j++)
    	if(digits[j]!=0)
        	for(int p=0;p<digits[j];p++)mi+=to_string(j);
    for(int j=9;j>=0;j--)
      if(digits[j]!=0)
        for(int p=0;p<digits[j];p++)ma+=to_string(j);
    //cout<<"ma:"<<ma<<" mi:"<<mi;
    res=stoi(ma)-stoi(mi);
  }
  cout<<res;
  return 0;
}
