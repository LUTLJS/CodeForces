#include<bits/stdc++.h>
using namespace std;
/*
if integral solutions for a linear Diophantine equation exists could be determined by c%gcd(a,b)
*/
bool isPossible(int a,int b,int c){
  return (c%gcd(a,b)==0);
}
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  cout<<isPossible(a,b,c);
  return 0;
}
