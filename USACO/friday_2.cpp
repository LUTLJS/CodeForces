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
            if(!(j==1&&i==1900)){
                int days,remainder;
                if(j==3){
                    if((i%100==0&&i%400==0)||(i%100!=0&&i%4==0)){
                    //leap year
                        days=29;
                    }else{
                    //not leap year
                        days=28;
                    }    
                }else{
                    if(j==5||j==7||j==10||j==12){
                        days=30;
                    }else {
                        days=31;
                    }
                }
                remainder=days%7;
                if(prev13th+remainder>7)prev13th=prev13th+remainder-7;
                    else prev13th+=remainder;
                weekdays[prev13th]++;
            }
        }
    }
    fout<<weekdays[6]<<" "<<weekdays[7]<<" ";
    for(int i=1;i<=4;i++)fout<<weekdays[i]<<" ";
    fout<<weekdays[5]<<"\n";
    return 0;
}
