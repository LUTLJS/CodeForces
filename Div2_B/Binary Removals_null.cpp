#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
    	string s;cin>>s;
    	int in=-1;
    	for(int i=0;i<s.length();i++)if(s[i]=='1'){in=i;break;}
    	if(in==-1){cout<<"yes\n";continue;}
    	vector<int> v;
    	for(int i=in+1;i<s.length();i++){
    		if(s[i]=='0')v.push_back(i);
    	}
    	if(v.size()<2){cout<<"yes\n";continue;}
    	bool all=true;int tem;
    	for(int i=v.size()-1;i>0;i--){
    		if(v[i]-v[i-1]==1){
    			all=false;
    			tem=i-1;
    			break;
    		}
    	}
    	if(all){
    		cout<<"yes,done\n";
    		
    	}else{
    			v.clear();
    			
    			
    			cout<<"v sizee"<<v.size()<<" ";
    			for(int i=in;i<tem;i++)if(s[i]=='1')v.push_back(i);
    			
    			cout<<v.size()<<" ";
    			if(v.size()<2){cout<<"yes\n";continue;}
    			all=true;
    			for(int i=1;i<v.size();i++)if(v[i]-v[i-1]==1){all=false;break;}
    			if(all)cout<<"yes\n";else cout<<"no\n";
    	}
    }
    return 0;
}
