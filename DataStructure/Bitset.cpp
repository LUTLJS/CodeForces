#include<bits/stdc++.h>
using namespace std;
/*
If we have a bitset whose size is n, then n bits memory will be allocated for this bit array.
It's less space consuming than use an ordinary int array since int is 32 bits.
Using an array of bool could be enough.
Usually, an array of bool is ok. So don't use bitset except the memory is a critical issue.
*/
int main(){
    bitset<10> s;
    s[1]=1;
    s[3]=1;
    s[4]=1;
    cout<<s[4]<<s[5];
    bitset<10> s1(string("0010011101"));// from right to left
    cout<<s1[9];
    cout<<s1.count()<<"\n";
    cout<<(s&s1)<<"\n";
    cout<<(s|s1)<<"\n";
    cout<<(s^s1)<<"\n";
    return 0;
}
