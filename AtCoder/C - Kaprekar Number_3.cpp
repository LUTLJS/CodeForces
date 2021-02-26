#include<bits/stdc++.h>
using namespace std;
/*
Initializing an array to be 0s elements could use this form: int a[100]={};
*/
int main(){
  string s;int k,ma,mi,m,n;cin>>s>>k;
  while(k-->1){
    int a[10]={},b[10]={},ma=0,mi=0;
    for(char x:s)a[x-'0']++,b[x-'0']++;
    for(m=0,n=9;m<10;m++,n--){
      while(a[m]--)mi=mi*10+m;
      while(b[n]--)ma=ma*10+n;}
    s=to_string(ma-mi);
  }
  cout<<s;
  return 0;
}
