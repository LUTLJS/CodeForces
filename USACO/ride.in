/*
ID: lutljs1
PROG: ride
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    ofstream fout("ride.out");
    ifstream fin("ride.in");
    string a,b;
    fin>>a>>b;
    int ma=1,mb=1;
    for(char x:a)ma*=x-'A'+1;
    for(char x:b)mb*=x-'A'+1;
    fout<<(ma%47==mb%47?"GO":"STAY")<<"\n";
    return 0;
}
