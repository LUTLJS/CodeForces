#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k,p;cin>>n>>k;
  int digits[10];
  string s=to_string(n),ma,mi;
  for(int i=1;i<=k;i++){
    // Initialize all elements to be 0.
    for(int m=0;m<10;m++)digits[m]=0;
    // Calculating how many times each digit appears
    for(char x:s)digits[x-'0']++;
    // Initializing max and min to empty string
    ma="",mi="";
    for(int j=1;j<10;j++){p=digits[j];if(p!=0)while(p--)mi+=to_string(j);}
    for(int j=9;j>=0;j--){p=digits[j];if(p!=0)while(p--)ma+=to_string(j);}
    s=to_string((ma.length()!=0&&mi.length()!=0)?stoi(ma)-stoi(mi):0);
  }
  cout<<s;
  return 0;
}
