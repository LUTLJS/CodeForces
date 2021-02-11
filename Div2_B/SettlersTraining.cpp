#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,k,e;cin>>n>>k;
    int c[k+1];
    // Don't forget to initialize them as 0
    // since we need to them all to be 0 in the begining
    for(int i=0;i<k+1;i++)c[i]=0;
    // calculate how many soilders are there with 
    // same rank
    for(int i=0;i<n;i++){cin>>e;c[e]++;}
    // count coins needed to fullfil the training
    int count=0;
    while(true){
        // Assume that no one ranked below k
        // so doneTaining=true;
        bool hasCarry=false,doneTraining=true;
        for(int i=0;i<k;i++){
            if(hasCarry){
                // has carry, means there are at least
                // one soldier got his training, which
                // means one was spent, that means 
                // training is not done yet.
                doneTraining=false;
                if(c[i]==0){c[i]++;hasCarry=false;}
            }else if(c[i]!=0){c[i]--;hasCarry=true;doneTraining=false;}
        }
        if(!doneTraining)count++;
        // every soldier ranks equal to or above k
        // loop can be terminated now
        else break;
    }
    cout<<count;
    return 0;
}
