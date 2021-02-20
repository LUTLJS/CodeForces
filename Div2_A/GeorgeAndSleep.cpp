#include<bits/stdc++.h>
using namespace std;
/*
use the scanf function would save time by avoiding extracting integer from a string

*/
int main(){

    int h[2],m[2];
    for(int i=0;i<2;i++)
        scanf("%d:%d",&h[i],&m[i]);
    // simply subtract hours and minutes from h0 and m0 respectively
    // here we don't worry about the borrow at first,
    // just store the diff first,we will process this afterwards
    h[0]-=h[1];
    m[0]-=m[1];
    // now we are processing the borrow conditions
    if(m[0]<0){
        m[0]+=60;h[0]--;
    }
    if(h[0]<0){
        // add 24 if h is less than 0
        h[0]+=24;
    }
    // using printf function would be enough
    printf("%02d:%02d\n",h[0],m[0]);
    return 0;
}
