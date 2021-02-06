#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        if(n==1){
            cout<<-1<<"\n";
            int x;
            cin>>x;
            continue;
        }
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        
        int m=1,curr=a[0];
        for(int j=0;j<k;j++){
            if(j==k-1){
                for(;m<n;m++){
                    if(curr>=a[m]){
                        curr=a[m];
                        if(m==n-1){
                            cout<<-1<<"\n";
                            curr=a[0];
                            m=1;
                            break;
                        }
                    }else{
                        cout<<m<<"\n";
                        curr=a[0];
                        m=1;
                        break;
                    }
                }
            }else{
                for(;m<n;m++){
                    if(curr>=a[m]){
                        curr=a[m];
                    }else{
                        a[m-1]++;
                        if(n==2){
                            curr=a[m-1];
                            m=m-1;
                        }else{
                            curr=a[m-2];
                            m=m-2;
                        }
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
