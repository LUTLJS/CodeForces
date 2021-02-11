#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    pair<int,int> arr[367];
    for(int i=0;i<367;i++)arr[i]={0,0};
    while(n--){
        string s;int a,b;cin>>s>>a>>b;
        // count how many friends could be there on each day from 1 to 366
        // the first element of the pair stores the number of people that are available that day,
        // while the second element stores the number of available female on that day since
        // the total number, which is the first element actually, consists only of the number of female and the number of male
        for(int i=a;i<=b;i++){
            arr[i].first++;
            if(s[0]=='F')arr[i].second++;
        }
    }
    bool isFirst=true;int max=0;
    for(int i=0;i<367;i++){
        if(arr[i].first!=0){
            // calculate the amount of available pairs on each day
            int temp=2*min(arr[i].second,arr[i].first-arr[i].second);
            // get the largest number, which is the answer
            if(isFirst){max=temp;isFirst=false;}
            else max=max<temp?temp:max;
        }
    }
    cout<<max;
    return 0;
}


