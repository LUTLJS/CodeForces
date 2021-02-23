#include<bits/stdc++.h>
/*
This is incomplete.
Using brute force method will be just okay.
The editorial says using a little math trick will help reduce all these code.
But I don't understand how it works, so I tried to solve it naively.
Now I'm here, just posting code that are not complete for the solution.
I think I shouldn't have been bothering solving this problem.And I'm out of my patience.
It's just so obvious.
*/
using namespace std;
int y1,m1,d1,y2,m2,d2,firstyear=0,endyear=0;;
void cal(){
    if((y1%4==0&&y1%100!=0)||(y1%100=0&&y1%400==0)){
        switch(m1){
            case 1:firstyear=31-d1+29+31+30+31+30+31+31+30+31+30+31;return;
            case 2:firstyear=29-d1+31+30+31+30+31+31+30+31+30+31;return;
            default:;
        }
    }else{
        switch(m1){
            case 1:firstyear=31-d1+28+31+30+31+30+31+31+30+31+30+31;return;
            case 2:firstyear=28-d1+31+30+31+30+31+31+30+31+30+31;return;
            default:;
        }
    }
    switch(m1){
            case 3:firstyear=31-d1+30+31+30+31+31+30+31+30+31;break;
            case 4:firstyear=30-d1+31+30+31+31+30+31+30+31;break;
            case 5:firstyear=31-d1+30+31+31+30+31+30+31;break;
            case 6:firstyear=30-d1+31+31+30+31+30+31;break;
            case 7:firstyear=31-d1+31+30+31+30+31;break;
            case 8:firstyear=31-d1+30+31+30+31;break;
            case 9:firstyear=30-d1+31+30+31;break;
            case 10:firstyear=31-d1+30+31;break;
            case 11:firstyear=31-d1+31;break;
            default:firstyear=31-d1;break;
        }
}
int main(){
    
    scanf("%d:%d",&y1,&m1,&d1);
    scanf("%d:%d",&y2,&m2,&d2);
    int howmanyleapyears=0;
    for(int i=y1+1;i<y2;i++){
        ((i%4==0&&i%100!=0)||(i%100=0&&i%400==0)?howmanyleapyears++:;)
    }
    int betweendays=366*howmanyleapyears+365*(y2-y1-1-howmanyleapyears);
    cal();
    
        
    
}
