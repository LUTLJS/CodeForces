#include<bits/stdc++.h>
using namespace std;
/*
The whole idea is to store the minimum value of the elements we've encountered so far with the current element.
The following code finds the minimum element of some fixedLength segments, which are a0~afixedLength-1
*/
int main(){
  int n,fixedLength;
  cin>>n>>fixedLength;
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
  stack<pair<int,int>> st;
  // Adding the first fixedLength elements to the stack
  // The pair.second of each stack element is the minimum value so far
  // If we perform this operation on the whole array, we store the so-far minimum value with each elements in a stack
  for(int i=0;i<fixedLength;i++){
    int new_min=st.empty()?a[i]:min(a[i],st.top().second);
    st.push({a[i],new_min});
  }
  /*
  The following code simply pops out an element from the stack and store a new element along with the so-far minimum value
  */
  // After the above operation, the top element of the stack has the minimum value of the stack
  for(int i=fixedLength;i<n;i++){
    // Printing the minimum value of the stack
    cout<<st.top().second<<" ";
    // Removing an element
    st.pop();
    // Adding the remaining elements to the stack
    // operation like above
    // Since the stack won't be empty, so we just need to compare the new element to the current minimum value.
    int new_min=min(a[i],st.top().second);
    st.push({a[i],new_min});
  }
  return 0;
}
