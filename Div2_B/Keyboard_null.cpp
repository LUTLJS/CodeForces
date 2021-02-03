#include<bits/stdc++.h>
using namespace std;
bool exists(char ch,int num,string st){
    for(int j=0;j<num;j++){
                if(st[j].find(ch)==std::string::npos){
                    return false;
                }
    }
    return true;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m,x;
    cin>>n>>m>>x;
    string s[n];
    for(int i=0;i<n;i++)cin>>s[i];
   
    int q;
    cin>>q;
    string text;
    cin>>text;
    for(int i=0;i<q;i++){
        char c=text[i];
        if(c>='a'&&c<='z'){
            if(!exists(c,n,s)){
                cout<<-1;
                return 0;
            }
        }else{
            if(exists((char)(c+32),n,s)){
                
            }else{
                cout<<-1;
                return 0;
            }
        }
    }
    return 0;
}
