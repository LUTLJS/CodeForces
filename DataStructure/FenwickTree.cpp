#include<bits/stdc++.h>
using namespace std;
// quickly get sum of a range

struct FenwickTree {
    vector<int> bit;  // binary indexed tree
    int n;

    FenwickTree(int n) {
        this->n = n;
        bit.assign(n, 0);
    }

    FenwickTree(vector<int> a) : FenwickTree(a.size()) {
        for (size_t i = 0; i < a.size(); i++)
            add(i, a[i]);
    }
    // get sum up to and including r
    int sum(int r) {
        int ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret += bit[r];
        return ret;
    }
    // get sum of elements in the range [l,r]
    int sum(int l, int r) {
        return sum(r) - sum(l - 1);
    }

    void add(int idx, int delta) {
        for (; idx < n; idx = idx | (idx + 1))
            bit[idx] += delta;
    }
};
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    FenwickTree ft=FenwickTree(a);
    // the sum in range[2,5]
    cout<<ft.sum(2,5)<<"\n";
  
  // the sum in range[0,7]
    cout<<ft.sum(7)<<"another one :";
    return 0;
}
