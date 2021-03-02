#include<bits/stdc++.h>
using namespace std;
/*
Implementing the process and you will get answer.
You need to understand one fact, which is always connecting the chrger to the joystick with lower power can make sure the game will not stop at the end of 
this minute.
So, at the beginning of each minute, connnecting the charger to the joystick with lower power to make the game non-stop.
When will it stop? when both of them are less than 2, or one of them is 0.
Implement the process and it will give the answer.
*/
int main(){
    int a,b;cin>>a>>b;
    int cnt=0;
    while((a>=2&&b>0)||(b>=2&&a>0)){
        cnt++;
        (a>b?(a-=2,b++):(b-=2,a++));
    }
    cout<<cnt;
    return 0;
}
