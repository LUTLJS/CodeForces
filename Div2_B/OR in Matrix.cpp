#include<bits/stdc++.h>
using namespace std;
/*
Take advantage of 0s in matrix B. 0s in matrix B means its corresponding row and column in matirx A are all zeros.
Then we form a matrix A with fullest ones except for rows and columns such that B(row,column)=0.
Then we use A to form a new matrix beta B,finally compare B to B.
If they are the same, then the answer is YES. Otherwise, it's a NO.
Make use of 0s in matrix B.
Firstly I tried to solve it, but it's too hard. And I almost gave up.
But I remember on thing: if I am not able to solve it, then I must have ignored something or I simply just haven't used all the given input yet.
So I tried to find out more according to the input. Turned out 0s in matrix B are the useful thing that can help solve it.
So I stcuk with this, trying to solve it with this 0s in B.
Then, a thought came to my mind. What if I form a matrix A with fullest ones except for rows and columns such that B(rows,column)=0.
If this new matrix A can be transformed into B, then the answer is YES.
The reason is simle. If we use all ones and we still can't form a B, then we definitely can't form a B with less ones.
But if we can, we'll just use this A as the answer.

Here we use map to record rows and columns that are to be 0s, or 1s.

*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int m,n;cin>>m>>n;
    int a[m][n],b[m][n];
    map<int,int> mpco1,mpro1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int x;cin>>x;
            a[i][j]=x;
            if(x==0){
                mpco1[j]++;mpro1[i]++;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mpco1[j]!=0||mpro1[i]!=0)b[i][j]=0;
            else b[i][j]=1;
        }
    }
    map<int,int> mpco,mpro;
    for(int i=0;i<m;i++){
        bool hasone=false;
        for(int j=0;j<n;j++){
            if(b[i][j]==1){hasone=true;break;}
        }
        if(hasone)mpro[i]++;
    }
    for(int i=0;i<n;i++){
        bool hasone=false;
        for(int j=0;j<m;j++){
            if(b[j][i]==1){hasone=true;break;}
        }
        if(hasone)mpco[i]++;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if((mpro[i]!=0||mpco[j]!=0)&&a[i][j]==0){cout<<"NO";return 0;}
            if(a[i][j]==1&&(mpro[i]==0&&mpco[j]==0)){cout<<"NO";return 0;}
        }
    }
    cout<<"YES\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)cout<<b[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
