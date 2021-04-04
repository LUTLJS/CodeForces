#include<bits/stdc++.h>
using namespace std;
/*
After some adjustment, I finally got it accepted.
No need for second way to solve it.
Just need some removal of the reduandant operations.
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
    	int n;cin>>n;
    	string a,b;cin>>a>>b;
    	pair<int,int> aa[a.length()];
    	if(a[0]=='0')aa[0]={1,0};else aa[0]={0,1};
    	for(int i=1;i<a.length();i++){
    		if(a[i]=='0')aa[i]={aa[i-1].first+1,aa[i-1].second};
    		else aa[i]={aa[i-1].first,aa[i-1].second+1};
    	}
    	bool y=true;
    	long long cnt=0;
    	for(int i=a.length()-1;i>-1;i--){
    		if(cnt&1){
    			a[i]=a[i]=='0'?'1':'0';
    			swap(aa[i].first,aa[i].second);
    		}
    		if(a[i]!=b[i]){
    			if(aa[i].first!=aa[i].second){y=false;break;}
    			cnt++;
    		}
    	}
    	if(y)cout<<"yes\n";
    	else cout<<"no\n";
    }
    return 0;
}
