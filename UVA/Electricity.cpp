#include<bits/stdc++.h>
using namespace std;
void process(int x,int y,int z);
vector<int> v;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    cin>>n;
    while(n){
        int d,m,y,c,count=0,con=0;
        cin>>d>>m>>y>>c;
        process(d,m,y);
        for(int i=0;i<n-1;i++){
            int cd,cm,cy,cc;
            cin>>cd>>cm>>cy>>cc;
            if(v[0]==cd&&cm==v[1]&&cy==v[2]){count++;con+=cc-c;}
            process(cd,cm,cy);
            c=cc;
        }
        cin>>n;
        cout<<count<<" "<<con<<"\n";
    }
    return 0;
}
void process(int d,int m,int y){
    if(d==28){
        if(m==2){
            if(y%4==0&&(y%100!=0||y%400==0))d=29;
                else{d=1;m=3;}
        }else d=29;
    }else if(d==30){
        if(m==2||m==4||m==6||m==9||m==11){d=1;m++;}
            else d++;
    }else if(d==31){
        if(m==12){m=1;d=1;y++;}
            else {d=1;m++;}
    }else if(d==29){
        if(y%4==0&&(y%100!=0||y%400==0)&&m==2){d=1;m=3;}
            else d++;
    }else d++;
    v[0]=d;
    v[1]=m;
    v[2]=y;
}
