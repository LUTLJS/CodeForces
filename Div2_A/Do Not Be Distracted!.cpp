
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;string s;cin>>s;
        stack<char> st;
        int a[256]={};
        bool y=true;
        for(int i=0;i<n;i++){
            if(st.empty()){
                if(a[s[i]]!=0){
                    y=false;
                    break;
                }else{st.push(s[i]);a[s[i]]=1;}
            }else{
                char c=st.top();
                if(c==s[i]){}
                else{
                    if(a[s[i]]==1){y=false;break;}
                    st.pop();
                    st.push(s[i]);
                    a[s[i]]=1;
                }
                
            }
        }
        if(y)cout<<"YES\n";else cout<<"NO\n";
    }

    return 0;
}
