#include<bits/stdc++.h>
using namespace std;
/*
Lexicographically printing all pairs 
Consider the case where p=0, if it's proved to be correct, then the solution is correct obviously.
p=0 is the minimum value in the statement.If it holds, then for p>0, it will still holds.
To solve this problem,you need to work on how to distribute these edges.I came up with one that is obviously better than this.
But it's complicated to implement it. So I checked out the editorial.Then it just tells me I need to distribute it this way, and it works.
To prove that it's correct, we work on the all possible subset, which is to find vertices of all subsets.Since we distribute edges this way, it's easy to calculate
how many vertices that each subset contains.
I worked on the optimal solution but I ended up with trouble implementing it.
In order to solve this, you need experience on distributing edges on a graph.
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n,p;cin>>n>>p;
        int te=2*n+p;
        int cnt=0;
        bool stop=false;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(cnt<te)cout<<i<<" "<<j<<"\n";
                else{stop=true; break;}
                cnt++;
            }
            if(stop)break;
        }
    }
    return 0;
}
