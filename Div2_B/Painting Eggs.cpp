#include<bits/stdc++.h>
using namespace std;
/*
For me, this is a weired solution.
Because it requires every step to be exactly what he wanted.
It means for the current egg, if I assign it to you, will it make you have 500 more money than he does, if the answer is yes, then, sorry, I can't assign it to you.
And this is could lead to the optimal ending. Because every pair of numbers, its sum is exactly 1000, this is how the sum of each pair is 1000 being applied.
I was so wondering how do I make the most of this given input.
It turned out it can be used to prove the process is correct for the whole thing.
So, this is what greedy all about, you just need to make sure for each step, the current result is what I want, I don't care about the future.
If the current situation is what I hope for, then I choose to do so. And I believe that this could lead to what I want in finally, no matter how long this process
could last.
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    int a[n],g[n];
    for(int i=0;i<n;i++){
        cin>>a[i];cin>>g[i];
    }
    string s;
    int sa=0,sg=0;
    for(int i=0;i<n;i++){
      // If I give you money, will it make you have 500 more money than he does, if it's yes, then I couldn't give it to you.
      // Because I only care about the current situation.
      // And this strategy proves to be correct.
        if(sa+a[i]-sg<=500){s+='A';sa+=a[i];}
        else{s+='G';sg+=g[i];}
    }
    cout<<s;
    return 0;
}
