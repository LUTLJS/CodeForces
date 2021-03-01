#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,s;cin>>a>>b>>s;
    // dif has to be even to reach point(a,b)
    int dif=s-abs(a)-abs(b);
    cout<<(dif>=0&&!(dif&1)?"Yes":"No");
    return 0;
}
