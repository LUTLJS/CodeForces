#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    bool printPoints=true;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            for(int j=1;j<=m;j++)cout<<"#";
            cout<<"\n";
        }else{
            if(printPoints){
                for(int k=1;k<=m-1;k++)cout<<".";
                cout<<"#\n";
                printPoints=false;
            }else{
                cout<<"#";
                for(int k=1;k<=m-1;k++)cout<<".";
                cout<<"\n";
                printPoints=true;
            }
        }
    }
    return 0;
}
