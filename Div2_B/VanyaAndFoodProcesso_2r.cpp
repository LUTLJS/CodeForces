#include<bits/stdc++.h>
using namespace std;
/*
the cnt could be really large, so we have to use long long cnt.
Compare to the last solution, this one don't use recursive function.
Because there is no need to do so. Simply cutting down ch, which is currentHeight initially, to less than k.
After that, be careful that it could overflow the h when adds the current piece, so we need to determine if it's going to 
overflow the h. If so, just set currentHeight to 0 and add one to cnt since there is no more potato left in the processor.
*/
/*
For this problem, we just need to clearly understang what is going to for the current step.
We need to consider the height of potato in the processor, determine if it's okay to add the next potato to the food processor.
Simply put, implementing the real situation here would be enough.
Analyzing the current situation, should we do this? should we do that? If this happens, what is going to happen next?
Considering the following variables:
current height of potato inside the food processor, it determines if we can add another potato

the total working time of the food processor

We wait until the next potato could be put inside.

if we don't have to put them inside the processor in order, we may could save much more time since we could rearrange them in terms of size

Having meaningful variable names is going to help you clarify what should you do next.

The following code is hard to read. Because I intended to keep it compact.There is no readability here of course.
*/
int main(){
    int ch=0,n,h,k,x;long long cnt=0;
    cin>>n>>h>>k;
    while(cin>>x){
        if(ch+x>h){
            if(ch/k==0){cnt++;ch=0;}
            else{cnt+=ch/k;ch%=k;
            if(ch+x>h){cnt++;ch=0;}}}
        ch+=x;
    }
    cout<<(cnt+=(ch%k?ch/k+1:ch/k));
    return 0;
}
