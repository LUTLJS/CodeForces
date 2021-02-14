#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b,c,d,n;cin>>a>>b>>c>>d>>n;int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int x:arr)cout<<x<<" ";
    if(a%2==0||b==1){
        char s[2*max(a*b,c*d)];int start=0;char startChar='a';
        for(int i=0;i<(2*max(a*b,c*d));i++)s[i]='.';
        for(int i=0;i<n;i++){
            int e=arr[i];
            for(int j=start;j<e+start;j++){
                s[j]=startChar;
            }
            start+=e;startChar++;
        }
        // test
        for(char x:s)cout<<x<<" ";cout<<"\n";
        vector<char> v[max(b,d)];int index=1;
        // the left rectangle:
        for(int i=0;i<(2*max(a*b,c*d));i++){
            if(index<=a){
                if(index&1){
                    for(int j=0;j<b;j++){
                        v[j].push_back(s[i]);
                        if(i!=(2*max(a*b,c*d)-1))i++;
                        else break;
                    }
                }else{
                    for(int j=b-1;j>=0;j--)
                        v[j].push_back(s[i]);
                        if(i!=(2*max(a*b,c*d)-1))i++;
                        else break;
                }
                index++;i--;
            }else{
                if(index&1){
                    for(int j=0;j<d;j++){
                        v[j].push_back(s[i]);
                        if(i!=(2*max(a*b,c*d)-1))i++;
                        else break;
                    }
                }else{
                    for(int j=d-1;j>=0;j--){
                        v[j].push_back(s[i]);
                        if(i!=(2*max(a*b,c*d)-1))i++;
                        else break;
                    }
                }
                index++;i--;
            }
        }
        // test
        if(b<d){
            for(int i=0;i<max(b,d);i++){
                if(i<b){
                    for(char x:v[i])cout<<x;
                    cout<<"\n";
                }else{
                    for(int j=0;j<a;j++)cout<<".";
                    for(int j=a;j<v[i].size();j++)cout<<v[i][j];
                    cout<<"\n";
                }
            }
        }else{
            for(vector<char> x:v){
                for(char e:x)cout<<e;cout<<"\n";}
        }
    }
    return 0;
}
