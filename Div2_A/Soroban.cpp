#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    while(true){
        int r=n%10;
        if(r>=5){
            cout<<"-O|";
            for(int i=0;i<r-5;i++)cout<<"O";
            cout<<"-";
            for(int i=0;i<9-r;i++)cout<<"O";
            cout<<"\n";
        }else{
            cout<<"O-|";
            for(int i=0;i<r;i++)cout<<"O";
            cout<<"-";
            for(int i=0;i<4-r;i++)cout<<"O";
            cout<<"\n";
        }
        if(n/10)n/=10;
        else break;
    }
    return 0;
}


