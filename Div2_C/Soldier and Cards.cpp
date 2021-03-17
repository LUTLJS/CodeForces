#include<bits/stdc++.h>
using namespace std;
/*
The basic idea is to do it as it said, but we need to store every case that have occurred before in order to detect if it's going to go forward forever.
If the currecnt case matchs the case that have appeared before, then the game is not going to end. Because a loop has emerged.
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    int k1;cin>>k1;
    queue<int> q1,q2;
    for(int i=0;i<k1;i++){int x;cin>>x;q1.push(x);}
    int k2;cin>>k2;
    for(int i=0;i<k2;i++){int x;cin>>x;q2.push(x);}
    int cnt=0;
    vector<pair<int,int>> back;
    vector<pair<pair<int,int>,vector<pair<vector<int>,vector<int>>>>> mighty;
    while(!q1.empty()&&!q2.empty()){
        cnt++;
        int f1=q1.front(),f2=q2.front();q1.pop();q2.pop();
        if(f1>f2){
            q1.push(f2);q1.push(f1);
        }else{
            q2.push(f1);q2.push(f2);
        }
        
        int s1=q1.size(),s2=q2.size();
        if(s1!=0&&s2!=0){
            vector<int> ss1,ss2;
            while(!q1.empty()){int x=q1.front();q1.pop();ss1.push_back(x);}
            for(int x:ss1)q1.push(x);
            while(!q2.empty()){int x=q2.front();q2.pop();ss2.push_back(x);}
            for(int x:ss2)q2.push(x);
            if(back.size()!=0){
                bool fo=false;
                for(int i=0;i<back.size();i++){
                    if(back[i].first==s1&&back[i].second==s2){fo=true;break;}    
                }
                if(fo){
                    for(int i=0;i<mighty.size();i++){
                        if(mighty[i].first.first==s1&&mighty[i].first.second==s2){
                            vector<pair<vector<int>,vector<int>>> he=mighty[i].second;
                            for(int j=0;j<he.size();j++){
                                bool innerfoundit=true;
                                vector<int> innner=he[j].first;
                                for(int k=0;k<innner.size();k++){
                                    if(innner[k]!=ss1[k]){innerfoundit=false;break;}
                                }
                                if(innerfoundit){
                                    vector<int> outter=he[j].second;
                                    bool fou=true;
                                    for(int k=0;k<outter.size();k++){
                                        if(outter[k]!=ss2[k]){fou=false;break;}
                                    }
                                    if(fou){
                                        cout<<-1;return 0;
                                    }else{
                                        continue;   
                                    }
                                }else{
                                    continue;
                                }
                            }
                            mighty[i].second.push_back({ss1,ss2});
                        }
                    }
                }else{
                    back.push_back({s1,s2});
                    vector<pair<vector<int>,vector<int>>> ne;ne.push_back({ss1,ss2});
                    mighty.push_back({{s1,s2},ne});
                }
            }else{
                back.push_back({s1,s2});
                vector<pair<vector<int>,vector<int>>> ne;ne.push_back({ss1,ss2});
                mighty.push_back({{s1,s2},ne});
            }
        }
    }
    if(q1.empty())cout<<cnt<<" "<<2;
    else cout<<cnt<<" "<<1;
    return 0;
}
