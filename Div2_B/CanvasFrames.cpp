#include <bits/stdc++.h>
using namespace std;
/*
just count how many pair of same elements in the array,
so just use the elements as the index of an created array,
once the element appears, just simply increase the value of the index,
oh, don't forget initialize all elements in the array as value 0.
lastly, when iterating all elements of the array, don't forget the upper bound of 
the arry is a fixed number, which is 101.
101 is the longest length of the possible array in this given case.
two pairs of elements could form a required frame,
so counting the number of pairs, then divide by 2 would solve the problem.
*/
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    int a[101];
    for(int i=0;i<101;i++)a[i]=0;
    for(int i=0;i<n;i++){
        int e;cin>>e;
        a[e]++;
    }
    int count=0;
    // when there is only 1 or 2 elements, there are still many spaces left "untouched",
    // but n is specifically smalle in this problem.
    for(int i=1;i<101;i++){
        if(a[i]!=0){
            count+=a[i]/2;
        }
    }
    cout<<count/2;
    return 0;
}
