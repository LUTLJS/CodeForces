#include<bits/stdc++.h>
using namespace std;
// time complexity O(n+m);
int main(){
    int n,start=1,index,m;cin>>n;
    // store every element's original index
    // the maximum size of the vector would be 1e6 since a1+...+an<=1e6.
    vector<int> v;
    // time complexity would be a1+...+an<=1e6
    while(n--){
        cin>>index;
        // record the index of every elements
        while(index--)v.push_back(start);
        // after put all the elements into the vector, we increase the start variable by one.
        // The next 'new index' elements will have the smame 'start' index 
        start++;
    }
    // Once we store all the correct indexes, finding where every query is belong to just cost O(1) time complexity.
    // O(m)
    cin>>m;
    while(m--){cin>>n;cout<<v[--n]<<"\n";}
    return 0;
}
