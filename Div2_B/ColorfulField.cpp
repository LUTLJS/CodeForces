#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m,k,t;
    cin>>n>>m>>k>>t;
    map<int,int> map;
    for(int i=0;i<k;i++){
        int e1,e2;
        cin>>e1>>e2;
        map.insert(pair<int,int>(e1,e2));
    }
    for(int i=0;i<t;i++){
        int f1,f2,count=0;
        cin>>f1>>f2;
        bool isWaste=false;
        for(std::map<int,int>::iterator it=map.begin();it!=map.end();it++){
            int curr1=it->first,curr2=it->second;
            if(curr1==f1&&curr2==f2){
                        cout<<"Waste\n";
                        isWaste=true;
                        break;
            }
            if(curr1<f1||(curr1==f1&&curr2<f2))count++;
        }
        if(!isWaste){
            int crop=((f1-1)*m+(f2-1)-count)%3;
            if(crop==0)cout<<"Carrots\n";
            if(crop==1)cout<<"Kiwis\n";
            if(crop==2)cout<<"Grapes\n";
        }
    }
    return 0;
}
