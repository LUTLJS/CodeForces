#include<bits/stdc++.h>
using namespace std;
/*
just check if there are three or more consecutive numbers exist in tha array of dirty staircase,
if so, there is no way to reach the destination
and, if the first or last staircase is dirty, the answer is no
don't bother to iterate all possible solutions 
this problem only requires no or yes, it doesn't ask you to print all the solutions,
so you should think about it this way, for the current move, you move one step forward, or two steps, or three steps forward,
if there are three consecutive steps rigth in front you, you are not able to move forward, you are stuck here
then, the solution is obvious.
You don't have to iterate all the possible solutions.
Just focus on the current move, focus on what you can do,what can't you do, then you can solve it right away
what you can do: one, two, or three steps forward
what you can't do: step on dirty staircase
so, if there is no three or more dirty staircases in front you, you are good to go
*/
int main(){
    int n,m;cin>>n>>m;
    int b[m];
    for(int i=0;i<m;i++)cin>>b[i];
    sort(b,b+m);
    for(int i=0;i<m-2;i++){
        if(b[i]+1==b[i+1]&&b[i+1]+1==b[i+2]){cout<<"NO";return 0;}
    }
    cout<<(b[0]==1||b[m-1]==n?"NO":"YES");
    return 0;
}
