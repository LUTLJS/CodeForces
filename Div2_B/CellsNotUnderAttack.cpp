#include<bits/stdc++.h>
using namespace std;
/*
No need any tricks, just implement the whole process
*/
int main(){
    long long n,m;cin>>n>>m;
    long long lastNotUnderAttack=n*n;
    // for storing the already under attack x and y positions
    set<int> xsets,ysets;
    while(m--){
        int x,y;cin>>x>>y;
        if(lastNotUnderAttack==0){cout<<"0 ";continue;}
        // find x and y in xsets and ysets, respectively
        set<int>::iterator xit=xsets.find(x),yit=ysets.find(y);
        // if the new comer x and y exists in xsets and ysets respectively, then the number of not under attack cells remains the same;
        if(xit!=xsets.end()&&yit!=ysets.end()){
            cout<<lastNotUnderAttack<<" ";
            continue;
        }
        // if both x and y haven't appeared, then some new cells are under attack now
        if(xit==xsets.end()&&yit==ysets.end()){
            lastNotUnderAttack=lastNotUnderAttack-(2*n-1)+xsets.size()+ysets.size();
            cout<<(lastNotUnderAttack<=0?0:lastNotUnderAttack)<<" ";
            // don't forget insert x and y 
            xsets.insert(x);ysets.insert(y);
            continue;
        }
        if(xit!=xsets.end()&&yit==ysets.end()){
            lastNotUnderAttack=lastNotUnderAttack-(n-1)+xsets.size()-1;
            ysets.insert(y);
            cout<<(lastNotUnderAttack<=0?0:lastNotUnderAttack)<<" ";
            continue;
        }
        if(xit==xsets.end()&&yit!=ysets.end()){
            lastNotUnderAttack=lastNotUnderAttack-(n-1)+ysets.size()-1;
            xsets.insert(x);
            cout<<(lastNotUnderAttack<=0?0:lastNotUnderAttack)<<" ";
        }
    }
    return 0;
}
