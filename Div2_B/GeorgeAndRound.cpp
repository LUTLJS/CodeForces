#include<bits/stdc++.h>
using namespace std;
/*
No tricks needed since the limits on the input data is pretty small.
Just implement the process.
The following code could be simplified obviously.But I don't intend to modify it.
Correctly understanding the problem would help solve the problems.
I thought a lot about this problem. But it turned out I don't need any clever tricks to combat this.
I just needed to implement the process.
*/
int main(){
    int n,m;cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    int startForJ=0;
    for(int i=0;i<n;i++){
        for(int j=startForJ;j<m;j++){
            if(a[i]==b[j]){
                startForJ=j+1;
                // This conditional statment is clearly for the answer.
                // If you understand what is needed to solve this problem, then this is easy.
                if(startForJ==m){cout<<n-1-i;return 0;}
                break;
            }else if(a[i]>b[j]){
                // Notice n-i and n-1-i
                if(j+1==m){cout<<n-i;return 0;}
            }else{
                // This means the problems prepared are harder than required, but we can simplify them easily
                // so we don't need to come up with new problems, this is exactly what the problem statement states.
                startForJ=j+1;
                // Moving on to the next element in b
                if(startForJ==m){cout<<n-1-i;return 0;}
                break;
            }
        }
    }
    // If code execution comes down here, it means the problems prepared are enough.
    cout<<0;
    return 0;
}
