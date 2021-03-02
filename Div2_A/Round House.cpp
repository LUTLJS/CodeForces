#include<bits/stdc++.h>
using namespace std;
/*
Using O(|b|) time complexity would be enough.
This save me a lot of time to figure out how to do it in O(1) time complexity.
Remember that if we could solve it in O(n) time complexity. Then we just do it.
Let the computer do the dirty work.No need to it a O(1) if we suffice the requirement.
*/
int main(){
    int n,a,b;cin>>n>>a>>b;
    if(b==0){cout<<a;return 0;}
    if(b<0){
       b=-b;
       while(b--){
           if(a==1)a=n;
           else a--;
       }
    }else{
        while(b--){
            if(a==n)a=1;
            else a++;
        }
    }
    cout<<a;
    return 0;
}
