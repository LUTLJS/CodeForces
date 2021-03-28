#include <bits/stdc++.h>
using namespace std;
/*
This is mind-blowing. Yet it allows us to solve it more efficiently.
A twisted method to solve this problem.
The editorial sucks, by the way.
*/
/*
The way to solve this problem is totally weired for me.
The smallest element of an array of size x.
For every element of the original array, we find:
1: the largest j such that j<i and a[j]<a[i], otherwise j=-1,
2: the smallest j such that j>i and a[j]<a[i], otherwise j=n.
the element ai would be the smallest of array of size 1,2,...,r[i]-l[i]-1.
*/
const int maxn=1e6+1;
int a[maxn],n,l[maxn],r[maxn],ans[maxn];
stack<int> s;
int main() {
	ios::sync_with_stdio(false);cin.tie(nullptr);
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	fill(l,l+maxn,-1);
	fill(r,r+maxn,n);
  /*
  for j<i, find the largest j such that aj<ai
  a stack is being used here to always compare most adjacent element to the left with the current element
  if the element is larger or equal to the current element, pop it out, because we want to find the largest j, in this case 
  a(j-1) is of no use since there is at least aj is smaller, so the l[i] will never be a(j-1).
  This is why we use a stack here, always pick the latest element. Because that's what we want here, to find the largest j,such that j<i and aj<ai
  if it doesn't exist, then l[i] stays the same, which is -1.
  So, l array is to record the largest j such that j<i and aj<ai.
  r array is to record the smallest j such that j>i and aj<ai
  */
	for(int i=0;i<n;i++){
		while(!s.empty()&&a[s.top()]>=a[i])s.pop();
		if(!s.empty())l[i]=s.top();
		s.push(i);
	}
	while(!s.empty())s.pop();
	for(int i=n-1;i>-1;i--){
		while(!s.empty()&&a[s.top()]>=a[i])s.pop();
		if(!s.empty())r[i]=s.top();
		s.push(i);
	}
  /*
  
  */
	for(int i=0;i<n;i++){
    /*
    a[i] here is the smallest element in array of size len
    there are many arrays of size len, and we need the maximum among all those smallest a[i]
    */
		int len=r[i]-l[i]-1;
    /*
    so we update ans[len] once there is a larger one
    the element of ans array is the largest the answer of size len
    */
    /*
    Here, we only care about the largest element of array of size len.
    And yet, ans[len] is also the largest element of array of size 1,2,3,...,len
    So,afterwards, we need to iterate ans array backwards to compare the current element and the i+1 element.
    */
		ans[len]=max(ans[len],a[i]);
	}
  /*
  ans[len] could be the largest element of array of size 1,2,3..len, so we need to update it.
  */
	for(int i=n;i>-1;i--)ans[i]=max(ans[i],ans[i+1]);
	for(int i=1;i<n+1;i++)cout<<ans[i]<<" ";
	return 0;
}
