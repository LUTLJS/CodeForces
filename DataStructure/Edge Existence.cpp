#include <bits/stdc++.h>
using namespace std;
/*
The elements has to be a vector<int> because there might be many vertices that connect with the same vertex.
If just use an int for every vertex, it means if it has many vertices, it'll only record the last one that appears in the input.
So we use a vector as the element of the array,the index of the array stands for every node, and the value of array[i] contains a 
vector that contains nodes that connect to the node i.
*/
int main() {
	int n,m;cin>>n>>m;
	vector<int> a[n+1];
	while(m--){
		int u,v;cin>>u>>v;
    // we push every node v into a[u] in case there are many nodes connect to node u
		a[u].push_back(v);
	}
	int q;cin>>q;
	while(q--){
    // x and y are two nodes
		int x,y;cin>>x>>y;
		bool findIt=false;
    // first we lest x be the index node, iterate all elements of a[x], namely determine if y exists in vector a[x]
    // if it does exist, then there is an edge FROM x and y. 
		for(auto e:a[x])if(e==y){cout<<"YES\n";findIt=true;break;}
    // if we already have found it, then we have to shut down the the following code. There may be self-loops here. So to avoid printing two consecutive yes
    // we have to skip the second part. 
		if(!findIt)
    // Since it's an undirected graph, if the previous case doesn't exist, then we need to test the other case
    // this time we let y be the startring node, iterate all nodes of a[y], determine whether there is element x in the vector a[y]
		for(auto e:a[y])if(e==x){cout<<"YES\n";findIt=true;break;}
		if(!findIt)cout<<"NO\n";
	}
}
