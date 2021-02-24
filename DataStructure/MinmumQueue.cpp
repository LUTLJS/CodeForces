#include<bits/stdc++.h>
using namespace std;
/*
Find the minimum of all segments of fixed length
The following method is equals to finding the smallest among all elements of the array?
*/
int main(){
  int n,fixedLen;
  cin>>n>>fixedLen;
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
  deque<int> q;
  // Adding the first fixedLen elements to the deque q
  // After this, the smallest elements could be found in the front the deque
  // The size of the deque depends on how the elements appears in the original array
  for(int i=0;i<fixedLen;i++){
    // Removing all elements that are larger than the new comer since we need the smallest 
    // In case the new comer is the minimum in the subsequent segments, so if the new comer is less than the back element
    while(!q.empty()&&q.back()>a[i])
      q.pop_back();
    q.push_back(a[i]);
  }
  // removeFromHere is the index of the to_be_removed element
  /*
  We use this variable to guide us to form a new segment consecutively.
  */
  int removeFromHere=0;
  for(int j=fixedLen;j<n;j++){
    // If the to_be_removed is not in the deque, then we do nothing. It means the to_be_removed is not the smallest, then the smallest of the new 
    // segment is still the same as before
    /*
    Otherwise, we need to remove the front of the deque since we need to add a new comer and have a new segment,
    the smallest of the new segment would be new front of the deque.
    */
    if(!q.empty()&&q.front()==a[removeFromHere++])
      q.pop_front();
    while(!q.empty()&&q.back()>a[j]) q.pop_back();
    q.push_back(a[j]);
  }
  /*
  The front element of the utilmate deduq q would be the smallest among all segments of fixedLen length.
  */
  cout<<q.front();
  return 0;
}
