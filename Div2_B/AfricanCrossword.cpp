#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m;cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++)cin>>s[i];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char c=s[i][j];
            bool repeated=false;
            for(int k=0;k<m;k++){
                if(k!=j&&s[i][k]==c){repeated=true;break;}
            }
            if(!repeated){
                for(int k=0;k<n;k++){
                    if(k!=i&&s[k][j]==c){repeated=true;break;}
                }
            }
            if(!repeated)cout<<c;
        }
    }
    return 0;
}
