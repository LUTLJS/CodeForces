/*
ID: lutljs1
TASK: friday
LANG: C++

*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    ofstream fout("friday.out");
    ifstream fin("friday.in");
    int N;fin>>N;
    int weekdays[8];for(int i=1;i<8;i++)weekdays[i]=0;
    int prev13th=6;//1 for Monday
    weekdays[6]++;
    for(int i=1900;i<=1900+N-1;i++){
        for(int j=1;j<13;j++){
            if(i!=1900&&j!=1){
                if(j==3){
                    int days,remainder;
                    if((i%100==0&&i%400==0)||(i%100!=0&&i%4==0)){
                    //leap year
                        days=29-13+13;remainder=days%7;
                    }else{
                    //not leap year
                        days=28-13+13;remainder=days%7;
                    }    
                    if(prev13th+remainder>7)prev13th=prev13th+remainder-7;
                        else prev13th+=remainder;
                    weekdays[prev13th]++;
                }else{
                    
                    
                }
            }
        }
    }
    return 0;
}
