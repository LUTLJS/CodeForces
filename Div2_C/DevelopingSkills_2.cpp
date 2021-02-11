#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k,sum=0,originalSum=0;cin>>n>>k;
    vector<int> nums[10];vector<int> u;bool allDone=false;
    while(n--){int e;cin>>e;nums[e%10].push_back(e);}
    for(int i=9;i>=1;i--)
        for(int j=0;j<nums[i].size();j++)
            if(k>=10-i){k-=10-i;u.push_back(nums[i][j]+=10-i);}
            else{allDone=true;u.push_back(nums[i][j]);}
    for(int j=0;j<nums[0].size();j++)u.push_back(nums[0][j]);
    if(allDone||k<=9){
        for(int i=0;i<u.size();i++)sum+=u[i]/10;
        cout<<sum;return 0;}
    if(!allDone){
        for(int i=0;i<u.size();i++){sum+=100-u[i];originalSum+=u[i];}
        cout<<(originalSum+=k<=sum?(k-k%10):sum)/10;}
    return 0;
}
