#include<bits/stdc++.h>
using namespace std;
// main idea: count the number of 1-9
int main(){
    int k;cin>>k;
    int n=4;
    int a[10];
    for(int i=0;i<10;i++)a[i]=0;
    while(n--){
        string s;cin>>s;
        for(char x:s){
            if(x!='.')a[x-'0']++;
        }
    }
    //for(int x:a)cout<<x<<" ";cout<<"\n";
    for(int i=1;i<10;i++)
        if(a[i]>2*k){cout<<"NO";return 0;}
    cout<<"YES";return 0;
    return 0;
}
