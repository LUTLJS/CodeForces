#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m;cin>>n>>m;
    int nn=n;
    int a[m],b[m];
    for(int i=0;i<m;i++){int e;cin>>e;a[i]=e;b[i]=e;}
    sort(a,a+m,greater<int>());
    sort(b,b+m,greater<int>());
    int maxMoney=0;
    while(true){
        int countMax=1,max=a[0];
        a[0]--;
        for(int i=1;i<m;i++){
            if(max==a[i]){countMax++;a[i]--;}
            else break;
        }
        if(n<=countMax){
            maxMoney+=n*max;
            break;
        }else{
            maxMoney+=countMax*max;
            n-=countMax;
        }
    }
    cout<<maxMoney<<" ";
    
    int minMoney=0;
    while(nn--)
        for(int i=m-1;i>=0;i--)
            if(b[i]!=0){minMoney+=b[i]--;break;}
    cout<<minMoney;
    return 0;
}
