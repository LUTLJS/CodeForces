#include<bits/stdc++.h>
using namespace std;
/*
Just check all substring of length 26
*/
int main(){
    string s;cin>>s;
    if(s.length()<26){cout<<-1;return 0;}
    bool ans=false;
    for(int i=0;i<s.length()-25;i++){
        string temp;
        for(int j=i;j<i+26;j++){
            temp+=s[j];
        }
        sort(temp.begin(),temp.end());
        bool good=true;
        for(int j=0;j<25;j++){
            if(temp[j]!='?'&&temp[j+1]!='?'&&temp[j]==temp[j+1]){good=false;break;}
        }
        if(good){
            string te="ABCDEFGHIJKLMNOPQRSTUVWXYZ",res;
            if(temp[25]=='?'){
                for(int j=0;j<i;j++){
                    if(s[j]=='?')cout<<'A';
                    else cout<<s[j];
                }
                cout<<te;
                for(int j=i+26;j<s.length();j++){
                    if(s[j]=='?')cout<<'A';
                    else cout<<s[j];
                }
                return 0;
            }
                int k=0;
                for(int j=0;j<26;j++){
                    if(temp[j]!='?'){
                        while(temp[j]!=te[k]){
                            res+=te[k++];   
                        }
                        k++;
                        if(j==25){
                            for(int m=k;m<26;m++)res+=te[m];
                        }
                }
            }
            for(int j=0;j<i;j++){
                if(s[j]=='?')cout<<'A';
                else cout<<s[j];
            }
            int m=0;
            for(int j=i;j<i+26;j++){
                if(s[j]!='?')cout<<s[j];
                else{
                    cout<<res[m++];
                }
            }
            for(int j=i+26;j<s.length();j++){
                if(s[j]=='?')cout<<'A';
                else cout<<s[j];
            }
            return 0;
        }
    }
    cout<<-1;
    return 0;
}
