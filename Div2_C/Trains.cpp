#include<bits/stdc++.h>
using namespace std;
/*
Using the lcm would easily solve the problem.
Reading the examples would help understand what's going on in the statement.
I thought it's going to be harder,however, it turned out to be quite easy.
I didn't read the example at first, because I thought I could solve it by reading statement.
Trying to find out the math model by only reading the example.But it didn't end up well.
With the help of the example, I solved it very quickly.
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    long long a,b;cin>>a>>b;
    long long l=lcm(a,b);
    if(abs(l/a-l/b)==1){
        cout<<"equal";
    }else if(l/a<l/b){
        cout<<"Masha";
    }else cout<<"Dasha";
    return 0;
}
