#include<bits/stdc++.h>
using namespace std;
/*
Break it down according to the definition of F(x) given in the problem statement.
In order to make it possible maximum, we make it have digits as much as possible.
*/
void print(int num,int nu){
    for(int i=0;i<num;i++)cout<<nu;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;string a;cin>>n>>a;
    int s2=0,s3=0,s5=0,s7=0;
    for(char x:a){
        if(x=='9')s2++,s3+=2,s7++;
        if(x=='8')s2+=3,s7++;
        if(x=='7')s7++;
        if(x=='6')s5++,s3++;
        if(x=='5')s5++;
        if(x=='4')s3++,s2+=2;
        if(x=='3')s3++;
        if(x=='2')s2++;
    }
    print(s7,7);
    print(s5,5);
    print(s3,3);
    print(s2,2);
    return 0;
}
