#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        if(b>a){cout<<1<<"\n";continue;}
        if(b==a){cout<<2<<"\n";continue;}
        if(a>b){
            if(b==1){
                int originalB=b;
                b++;
                    int count;bool isFirst=true;
                    while(true){
                        long long m=1;int i;
                        for(i=1;;i++){
                            m*=b;
                            if(m>a)break;
                        }
                        if(isFirst){count=i+b-originalB;isFirst=false;}
                        else if(count>i+b-originalB){
                            count=i+b-originalB;
                        }else if(count<i+b-originalB){cout<<count<<"\n";break;}
                        b++;
                    }
            }else {
                int originalB=b;
                    int count;bool isFirst=true;
                    while(true){
                        long long m=1;int i;
                        for(i=1;;i++){
                            m*=b;
                            if(m>a)break;
                        }
                        if(isFirst){count=i+b-originalB;isFirst=false;}
                        else if(count>i+b-originalB){
                            count=i+b-originalB;
                        }else if(count<i+b-originalB){cout<<count<<"\n";break;}
                        b++;
                    }
            }
        }
    }
    return 0;
    
}
