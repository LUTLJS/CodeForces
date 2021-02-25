#include<bits/stdc++.h>
using namespace std;
/*
problem location: https://dunjudge.me/analysis/problems/894/
This is an attempted solution,which doesn't work.
The whole idea is to assign one guard to the highestIntelligence prisoner as possible, as long as the reamining guards are enough for watching out the 
remaining prisoners.

*/
int remainingGuards=0,remainingPrisoners=0,remainingHighestIntelligence=0;
int countEscapingPossibility=0;
bool remainingHighestIntelligenceInEndPoint(){
    // The locations of remaining prisoners could not be in a big consecutive chunck, so this makes method hard to implement.
}
bool oneGuardForHighestIntelligence(){
    if(remainingHighestIntelligenceInEndPoint()){
        if(3*(remainingGuards-1)>=remainingPrisoners-1)return true;
        else return false;
    }else{
        if(leftSideOfHighest()&&rightSideHighest()){
            return true;
        }else return flase;
    }
}

void process(){
    if(remainingPrisoners!=0)
    if(oneGuardForHighestIntelligence()){
        countEscapingPossibility+=remainingHighestIntelligence;
        remainGuards--;
        remainingPrisoners--;
        remainingHighestIntelligence=nextHighestIntelligence();
        process();
    }else if(twoGuardForTwoHightestIntelligence()){
        countEscapingPossibility+=2*(sumOfTwoHighestIntelligence());
        remainGuards--;
        remainingPrisoners-=2;
        remainingHighestIntelligence=pullOutTwoHighestIntelligence();
        process();
    }else{
        countEscapingPossibility+=3*(sumOfThreeHighestIntelligence());
        remainGuards--;
        remainingPrisoners-=3;
        remainingHighestIntelligence=pullOutTwoHighestIntelligence();
        process();
    }
}
int main(){
    int n,g;cin>>n>>g;
    int s[n];
    for(int i=0;i<n;i++)cin>>s[i];
}
