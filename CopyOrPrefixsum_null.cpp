#include<bits/stdc++.h>
using namespace std;


struct node{int val;node* left;node* right;};

int ct=0,m=-1,n;
const int MAX=200001;
int a[MAX];
node* createNewNode(int x){
    node* nn=new node;nn->val=x;nn->left=nullptr;nn->right=nullptr;return nn;}
   
void insert(node* &root,long long sum,int b[],int i,int n){
    cout<<"I'm coming";
    if(root==nullptr){
        root=createNewNode(b[0]);
        cout<<root->val<<"first node";
        insert(root,sum+b[0],b,1,n);
        return;
    }
    if(i==n-1){
        ct++;
        if(sum!=0)ct++;
        if(ct>(int)(1e9+7)){m=m+ct%(int)(1e9+7);ct=0;}
        return ;
    }
    root->left->val=b[i];
    insert(root->left,sum+b[i],b,i+1,n);
    if(sum!=0){root->right->val=b[i]-sum;insert(root->right,sum+b[i+1],b,i+1,n);}
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        node* root=nullptr;
        insert(root,0LL,a,0,n);
        cout<<"done";
        if(m==-1){
            cout<<ct<<"\n";
        }else cout<<(m+(ct%(int)(1e9+7)))%(int)(1e9+7)<<"\n";
        ct=0;
    }
    return 0;
}
