#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    /*
    v[i].first v[i].second: i would be the element of the original array
                            v[i].first would be the difference of positions between two same elements
                            v[i].second would be the index of last element's position
    Integrate all the information that we need afterwards into the vector<pair<difOfPosition, indexOfLastOccurence>>
    */
    vector<pair<int,int>> v(100001);
    // 
    for(int i=0;i<100001;i++)v[i]=make_pair(-1,-1);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        int difIndex=v[x].first;
        int index=v[x].second;
        // it's the first occurence 
        if(difIndex==-1)v[x]=make_pair(0,i);
        // it's the second occurence, we have its first dif of positions
        else if(difIndex==0)v[x]=make_pair(i-index,i);
        // exclude the elements with irregular occurrences, means we simply don't process it, ignore it
        else if(difIndex!=-2){
          // we got a new dif of positions
            int newDifIndex=i-index;
            // means more elements with regular occurrences
            if(difIndex==newDifIndex)v[x]=make_pair(difIndex,i);
            // the new occurrence breaks the regularity of its predecessors
            // then we ignore them all, they are all disqualified.
            else v[x]=make_pair(-2,-2);
        }
    }
    int cnt=0;
    for(int i=0;i<100001;i++){
        if(v[i].first!=-1&&v[i].first!=-2)cnt++;
    }
    cout<<cnt<<"\n";
    for(int i=0;i<100001;i++){
        if(v[i].first!=-1&&v[i].first!=-2){
            cout<<i<<" "<<v[i].first<<"\n";
        }
    }
    return 0;
}
