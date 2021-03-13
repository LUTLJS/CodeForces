#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    vector<int> a(n),g(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[i]=x;
        g[i]=y;
    }
    // for(int x:a)cout<<x<<" ";
    // cout<<"\n";
    // for(int x:g)cout<<x<<" ";
    // cout<<"\n";
    // pick a first
    int s1=a[0],s2=0;
    string res="A";
    for(int i=1;i<n;i++){
        if(s1>s2){s2+=g[i];res+='G';}
        else {s1+=a[i];res+='A';}
    }
    //cout<<s1<<" "<<s2<<" res:"<<res<<"\n";
    if(abs(s1-s2)<=500){cout<<res;return 0;}
    int s3,s4=g[0];
    string ress="G";
    for(int i=1;i<n;i++){
        if(s3>s4){s4+=g[i];ress+='G';}
        else {s3+=a[i];ress+='A';}
    }
    //cout<<s3<<" "<<s4<<"\n";
    if(abs(s3-s4)<=500){cout<<ress;return 0;}
    cout<<"-1";
    return 0;
}
