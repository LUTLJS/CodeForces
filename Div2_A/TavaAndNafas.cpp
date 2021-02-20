#include<bits/stdc++.h>
using namespace std;
// obviously,we need to find out the pattern of the English numerals
// then, everything is easy
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    string a[20] = {"zero", "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine","ten", "eleven", "twelve", 
        "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
        "eighteen", "nineteen"},
    c[10] = {"tmp", "ten", "twenty", "thirty", "forty", 
        "fifty", "sixty", "seventy", "eighty", "ninety"};
    if(n<20)cout<<a[n];
    if(n>=20){
           string s;
           if(n%10)cout<<c[n/10]<<"-"<<a[n%10];
           else cout<<c[n/10];
    }
    return 0;
}
