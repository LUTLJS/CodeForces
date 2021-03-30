#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int cntneg=0,cntpos=0;
        set<long long> setpos,setneg;
        bool ee=false;
        for(int i=1;i<n;i++){
        	if(a[i]>a[i-1]){cntpos++;setpos.insert(a[i]-a[i-1]);}
        	else{cntneg++;setneg.insert(a[i]-a[i-1]);}
        	if(a[i]==a[i-1])ee=true;
        }
        // c==0
        if(cntneg==n-1&&setneg.size()==1&&*(setneg.begin())==0){cout<<"0\n";continue;}
        if(ee){cout<<"-1\n";continue;}
        //c!=0
        if(cntpos!=0&&setpos.size()==1&&cntneg!=0&&setneg.size()==1){
        	long long m=*(setpos.begin())-*(setneg.begin());
        	if(a[0]<m)cout<<m<<" "<<*(setpos.begin())<<"\n";
        	else cout<<"-1\n";
        	continue;
        }
        if(cntpos!=0&&cntneg!=0&&(setpos.size()!=1||setneg.size()!=1)){cout<<"-1\n";continue;}
        if(cntpos!=0&&cntneg==0&&setpos.size()==1){cout<<"0\n";continue;}
        if(cntpos!=0&&cntneg==0&&setpos.size()!=1){cout<<"-1\n";continue;}
        if(cntpos==0&&cntneg!=0&&setneg.size()==1){cout<<"0\n";continue;}
        if(cntpos==0&&cntneg!=0&&setneg.size()!=1){cout<<"-1\n";continue;}
    }
    return 0;
}
