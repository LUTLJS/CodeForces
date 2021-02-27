#include<bits/stdc++.h>
int main(){
  // This array is for storing distance from picked node to any other node in a graph
  // First element will be used to store the picked node itself,which is distance[0]=0 if we pick node 0 to be picked node;
  // The distance from node a to node a is 0 obviously.
  // It depends on how you number the nodes.
  // Any node from the graph could be used as a starting node, so we can use distance[x]=0 to indicate its generality.
  int distance[n+1];
  // We use this to mark whether the current node has been processed. This could save work because if it's been processed, there's no need to do it again.
  // And we initialize it to be all 0;
  bool processed[n+1]={};
  //This priority queue is used to store node and its corresponding distance from starting node to itself.
  // The first element will be the distance between these two nodes, and the second element will be the node that connects to the starting node
  priority_quque<pair<int,int>> q;
  // This is an array whose element is a vector,in which there are pairs being stored.
  vector<pair<int,int>> adj[n+1];
  // Initially, all nodes are INFINITY far far away from the starting node except the picked node itself
  for(int i=1;i<=n;i++)distance[i]=INF;
  // In this case, we pick node x to be starting node, we'll start from here
  distance[x]=0;
  // Store node x and its distance from the starting node to node x.
  // Obviously, the distance is 0. You are already here, no need to run away and then come back
  q.push({0,x});
  // If the priority queue is not empty, then there is at least one node that needed to be processed.
  while(!q.empty()){
    // node a is ready to be processed. The second element of the pair is the current node, so we pop it out.
    int a=q.top.second;q.pop();
    // Next step, using processed[] array to determine if it's been processed.
    /*
    If it has not been processed, then we move on and don't forget to set its state to true.
    If it has been processed, then we simply continue to the next element in the priority queue.
    */
    if(processed[a])continue;
    // In this case, mark its state to true. Next time we see it again we can do simpler things.
    processed[a]=true;
    // Begining to process it.
    /*
    There might be many nodes that connects to the current node, so we use a for loop to process it.
    For every node connecting the current node a, we do the following things:
    determine whether the distance[a]+w is less than distance[new_node].
    distance[a]+w is a new distance, means we corss the city a and reach city b.
    The existing distance[b] is the distance of the path which doesn't include crossing city a.
    That's why we need to compare these two values.
    Since we initially set all diastances to be infinity except the starting node, if there has not been any path that leads to city b,
    we can still compare the new distance to the alreay-exists distance, which is INFINITY.
    If there is already a path that leads to city b, then we simply compare it to the new distance, which is distance[a]+w.
    */
    for(auto u:adj[a]){
      // w would be the distance , b would be the new node connecting with node a
      int b=u.first, w=u.second;
      if(distance[a]+w<distance[b]){
        //new smaller distacne appears, then we replace it. A new era has already come, the old needs to step down.
        distance[b]=distance[a]+w;
        // the default version of the priority queue sort elements in descending order, which is the opposite of what we want to achieve here,
        // so we make it negative.
        // Update the distancer from node b to starting node.
        /*
        Why do we need to push the new node into this priority queue here?
        Because it may lead to another shortest path. It means the distance between starting node and node b has been updated
        It means we can find the minimum distance in logarithmic time. For the already-processed nodes, the shortest path can be found quickly.
        So if a new shorter value appears, we need to keep track of it.
        */
        q.push({-distance[b],b});
      }
    }
  }
}
/*
We store the first m nodes in the priority queue since all other nodes are infinitely far away from the starting node.
These m nodes are connecting with the starting node directly.
For the second while loop, we get the minimum distance, means we startin processing with the node that is closest to the starting node.
Because it may lead to a shorter path to the nodes that have been processed before.
Because we want to find the minimum path, so we want every pick to be as small as possible.
In the end, we find the shortest among all path.
If there are multiple paths exist, then we pick the smaller one, the shorter one.
The first path that we find would be the default smallest if there is no isolated node.
if(distance[old_node]+w<distance[new_node]) is true, it means the already-existing distance should be updated,
it means there is another shorter path that exists.
Then we push this shorter path in priority queue.
The new-found node may have yet been processed, so we push it in the priority queue for next while loop.
*/
