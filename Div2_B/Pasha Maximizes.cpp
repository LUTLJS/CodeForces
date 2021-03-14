#include<bits/stdc++.h>
using namespace std;
/*
This doesn't seem hard to come up with a solution, because it's obvious.
If you want to make it the largest, you just find out the possible larger digit of the remaining part.
Everytime we evaluate the value of k to find out whether there is a bigger digit within reach.
If the answer is yes, then we use it.
find out the maximum digit within reach, and then if it's larger than the current digit, then we replace it.
This gurranteed that we make the most of the remainiing k steps.
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    string ans;int k;cin>>ans>>k;
    if(ans.length()==1){cout<<ans;return 0;}
    string temp="";
        for(int i=0;i<ans.length();i++){
            if(i==ans.length()-1)temp+=ans[i];else{
                bool exist=false;
                char curr=ans[i];
                int steps,ind;
                int maxi=-1;
                for(int j=i+1;j<=i+k&&j<ans.length();j++){
                    if(maxi<ans[j]-'0'){
                        maxi=ans[j]-'0';
                        steps=j-i;
                        ind=j;
                        curr=ans[j];
                    }
                }
                if(maxi>ans[i]-'0')exist=true;
                if(exist){
                    // update k
                    k-=steps;
                    temp+=curr;
                    // Since we're reusing the ans string, then we need to update it.
                    // to make ans string new, renew the ans string
                    ans=ans.substr(0,i)+curr+ans.substr(i,steps)+ans.substr(ind+1);
                }else temp+=ans[i];
            }
        }
    cout<<temp;
    return 0;
}
