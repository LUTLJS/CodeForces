#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,countInside=0,longest=0;string s;cin>>n>>s;bool isFirstOutsideWord=true;
    for(int i=0;i<n;i++){
        char c=s[i];
        if(c=='('){
            if(i!=(n-1)){
                i++;c=s[i];
                while(c!=')'){
                    if(c=='_'){
                        if(i!=(n-1)){
                            i++;c=s[i];
                            while(c=='_'){
                                if(i!=(n-1)){
                                    i++;c=s[i];
                                }else break;
                            }
                        }
                    }else{
                        countInside++;
                        if(i!=(n-1)){
                            i++;c=s[i];
                            while((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
                                if(i!=(n-1)){
                                    i++;c=s[i];
                                }else break;
                            }
                        }
                    }
                }
            }
        }else if(c=='_'){
            if(i!=(n-1)){
                i++;c=s[i];
                if(c!='_'){i--;continue;}
                while(c=='_'){
                    if(i!=(n-1)){
                        i++;c=s[i];
                        if(c!='_')i--;
                    }else break;
                }
            }
        }else{
            int len=1;
            if(i!=(n-1)){
                i++;c=s[i];
                if(!(c>='a'&&c<='z')&&!(c>='A'&&c<='Z'))i--;
                while((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
                    len++;
                    if(i!=(n-1)){
                        i++;c=s[i];
                        if(!(c>='a'&&c<='z')&&!(c>='A'&&c<='Z'))i--;
                    }else break;
                }
            }
            if(isFirstOutsideWord){longest=len;isFirstOutsideWord=false;}
            else longest=max(longest,len);
        }
    }
    cout<<longest<<" "<<countInside;
    return 0;
}
