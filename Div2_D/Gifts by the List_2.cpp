#include <bits/stdc++.h>
using namespace std;
/*
This is a strange method for me to solve a problem.
First time I tried to solve it, I started from all inputs. Try to use the a[] array, and it didn't get me anywhere.
If we focus on how to make a sequence from a[] array, that's not going to work. So, this road is a dead end.
Then we start from the relations, which is obviously a directed acyclic graph whose vertices are of at most one ingoing edge.
Then we should think of topo sort of a DAG. But that would give us a sequence of vertices in which all ancestors are of high priorities.
That's not what we want. Dead end, too! This is actually a reversal of the sequence that we want.

*/
/*
The key to this is topological sort of a DAG.
How to move from building a sequenc to toposort the graph?
the usual steps would be:toposort the graph-->get the sequence(ancestor->child)-->reverse it-->remove the redundant men-->
-->get the result according to the sequence-->compare the result with the given relust
Instead of toposort and reverse it, we do it by one step, which is store all the child first.Means the smaller one is one front of a queue.
That way the gift for smaller ones won't be going to their ancestors' pockets. That's the rule that statement tells us.
The gotgift[] array is amazing.Some men just don't get gifts from any other men, so that's what this gotgift array for.
*/
/*
To solve this problem, you have to figure out what you need to do exactly.
You need to build a sequence whose elements are from a[n] and are unique.
Finally, consider if this sequence meets the requirement of all men.
*/
vector<int> g[100001],ts,r(100001,-1),a(100001),ans;
bool visited[100001],gotgift[100001];
/*
dfs1 is like the reversal of toposort
*/
void dfs1(int v){
	if(visited[v])return ;
	visited[v]=true;
	for(int x:g[v]){
		dfs1(x);
	}
	ts.push_back(v);
}
void dfs2(int v,int x){
	if(r[v]!=-1)return ;
	r[v]=x;
	for(int u:g[v])dfs2(u,x);
}
int main() {
	ios::sync_with_stdio(false);cin.tie(nullptr);
	int n,m;cin>>n>>m;
	for(int i=0;i<m;i++){
		int u,v;cin>>u>>v;
		g[u].push_back(v);
	}
	for(int i=1;i<n+1;i++){
    cin>>a[i];
    /*
    This one is used to identify who got gift from others.
    */
    gotgift[a[i]]=true;
  }
	for(int i=1;i<n+1;i++)dfs1(i);
  /*
  Here we iterate through ts vector, and set all its decendants' wishes to be the current vertex, because that's the first ancestor in the list.
  Since child-father could happen in the sequence, so we use r[n] array to determine if we have processed it.
  One arrow, two birds-->array r[n] for storing result from the sequence and determing if we have processed it.
  */
	for(auto x:ts){
    /*
    Only the one who got gift from other men shall begin dfs2 process.
    */
		if(gotgift[x]){
			dfs2(x,x);
			ans.push_back(x);
		}
	}
	for(int i=1;i<=n;i++){
		if(r[i]!=a[i]){cout<<-1;return 0;}
	}
	cout<<ans.size()<<"\n";
	for(int x:ans)cout<<x<<"\n";
	return 0;
}
