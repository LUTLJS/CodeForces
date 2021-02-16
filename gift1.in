/*
ID: lutljs1
TASK: gift1
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    ofstream fout("gift1.out");
    ifstream fin("gift1.in");
    int NP;fin>>NP;
    pair<string,int> s[NP];
    for(int i=0;i<NP;i++){
        fin>>s[i].first;
        s[i].second=0;
    }
    string op;
    while(fin>>op){
        int di,pe;fin>>di>>pe;
        if(pe==0)continue;
        for(int i=0;i<NP;i++){
            if(op==s[i].first){s[i].second-=di/pe*pe;break;}
        }
        for(int i=0;i<pe;i++){
            string st;fin>>st;
            for(int j=0;j<NP;j++){
                if(st==s[j].first){s[j].second+=di/pe;break;}
            }
        }
    }
    for(pair<string,int> x:s){
        fout<<x.first<<" "<<x.second<<"\n";
    }
    return 0;
}
