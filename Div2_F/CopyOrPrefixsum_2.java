#include<bits/stdc++.h>
using namespace std;
// time limit exceeded because of too many recursive calls
// so I came out with an idea that I could just use a loop 
// since I just need the number of unique arrays,so I don't need a binary tree.
struct node{int val;node* left;node* right;};

int m=-1,n;
long long ct=0;
const int MAX=200001;
int a[MAX];
node* createNewNode(int x){
    node* nn=new node;nn->val=x;nn->left=nullptr;nn->right=nullptr;return nn;}
   
void insert(node* &root,long long sum,int b[],int i,int n){
    
    if(root==nullptr){
        root=createNewNode(b[0]);
        insert(root,b[0],b,1,n);
        return;
    }
    if(i==n-1){
        ct++;
        if(sum!=0)ct++;
        if(ct>1000000007){m=m+ct%1000000007;ct=0;}
        return ;
    }
    
    root->val=b[i];
    insert(root,sum+b[i],b,i+1,n);
    if(sum!=0){
        root->val=b[i]-sum;
        insert(root,b[i],b,i+1,n);}
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        if(n>1){
            node* root=nullptr;
            insert(root,0LL,a,0,n);
            if(m==-1){
                cout<<ct<<"\n";
            }else cout<<(m+1+ct%1000000007)%1000000007<<"\n";
            ct=0;
        }else cout<<"1\n";
    }
    return 0;
}
