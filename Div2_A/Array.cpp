#include<bits/stdc++.h>
using namespace std;
/*
There could be no positive numbers in the input.So we need to take at least two negative numbers from negative vector.
And be aware that the number of negative numbers, so in order to make sure that the first line is correct, we just print one negative number for the first
line of output. Print all the remaining negative numbers on third line of the output.
Firstly, splite them into three groups.
Then print each of them to meet the requirements.
*/
int main(){
    int n;cin>>n;
    vector<int> a,b,c;
    while(n--){
        int x;cin>>x;
        if(x<0)a.push_back(x);
        if(x==0)c.push_back(x);
        if(x>0)b.push_back(x);
    }
    if(b.size()==0){
        cout<<"1 "<<a[2]<<"\n";
        cout<<"2 "<<a[0]<<" "<<a[1]<<"\n";
        cout<<c.size()+a.size()-3<<" ";for(int x:c)cout<<x<<" ";for(int i=3;i<a.size();i++)cout<<a[i]<<" ";
    }else{
        cout<<"1 "<<a[0]<<" \n";
        cout<<b.size()<<" ";for(int x:b)cout<<x<<" ";cout<<"\n";
        cout<<c.size()+a.size()-1<<" ";for(int x:c)cout<<x<<" ";for(int i=1;i<a.size();i++)cout<<a[i]<<" ";
    }
    
    return 0;
}
