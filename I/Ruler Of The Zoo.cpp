#include<bits/stdc++.h>
using namespace std;
/*
Instead of doing these hard problems, I'd rather solve some problems with something I don't know yet.
This way I can learn something and make it my own.
Because some experienced people said that these hard problems need generaly abilities. But now I lack some basic knowledge about someting.
So I'm going to solve problems that require some knowledge I don't know yet. And I can improve from solving them.
Just like the last one, I learnt something about directed acyclic graph and its topological sorting.
That's great experience.
*/
/*
Firstly, I thought we should use a linkedlist but didn't know how to determine whether it's going to be infinite loop.
So, the input is a queue, but now we turn it into a circle, we see it as a circle.They now stand in a circle.
If the king wins, swap these two element, otherwise don't swap. But, the king always move clockwise.
*/
const int RED=0,BLUE=1,GREEN=2;
const long long inf=1e16;
typedef pair<long long,long long> ii;
typedef pair<long long,ii> iii;
long long n;
// a data structure that we created to be useful
struct animal{int a,b,c,id,pos,colour,redHere;};
vector<animal> belt;
// store original data
vector<animal> arr;
vector<iii> s;
vector<ii> reds;
void insert(long long b, long long beltPos,long long pos){
	while(!s.empty()&&s.back().first>=b)s.pop_back();
	s.push_back(iii(b,ii(beltPos,pos)));
}
long long totalMoves=0;
void brute(){
	/*
	double-ended queue to simulate the fight process
	*/
	deque<animal> q;
	/*
	the king after first fight
	*/
	animal w=arr[0];
	/*
	double ended queue stores all other animals
	*/
	for(int i=1;i<n;i++)q.push_back(arr[i]);
	/*
	count is 1 initially because the first has happened.
	count is for mark the fights a king has won
	*/
	long long count=1;
	/*
	x is the number of fights so far
	*/
	for(int x=1;;x++){
		/*
		if x could be larger than 2*n,then there is no two consecutive animals are red.
		why is 2*n?
		n is the number of animals
		x is the number of fights
		*/
		if(x>2*n)return ;
		/*
		the king has finally become the king
		*/
		if(count==3){
			cout<<w.id<<" "<<x<<"\n";exit(0);
		}
		/*
		the king has just won one fight
		*/
		if(count==1){
			// the king has just won one fight
			if(w.b>q.front().a){
				// the current king wins the second fight
				animal y=q.front();
				q.push_back(y);
				q.pop_front();
				count++;
			}else{
				q.push_back(w);
				w=q.front();
				q.pop_front();
				count=1;
			}
		}else{
			// king has won two consecutive fights
			if(w.c>q.front().a){
				// king won its third fight
				animal y=q.front();
				q.push_back(y);
				q.pop_front();
				count++;
			}else{
				q.push_back(w);
				w=q.front();
				q.pop_front();
				count=1;
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(nullptr);
	/*
	the number of animals
	*/
	cin>>n;
	/*
	strength A, B and C of an animal
	*/
	for(int i=0;i<n;i++){
		int a,b,c;cin>>a>>b>>c;
		/*
		make sure that input is correct / input meets the following condition
		*/
		assert(a>b and b<c);
		/*
		store original input
		*/
		arr.push_back({a,b,c,i,-1,1,-1});
	}
	/*
	handle the first fight
	*/
	if(arr[0].a>arr[1].a) swap(arr[0],arr[1]);
	/*
	to make a circle, the loser goes to the end of the queue
	*/
	arr.push_back(arr[0]);
	/*
	king is not here
	*/
	arr.erase(arr.begin());
	/*
	
	*/
	brute();
	for(int i=1;i<n;i++){
		if(arr[i-1].b>arr[i].a)arr[i].colour=RED;
	}
	for(int i=0;i<n;i++){
		arr[i].pos=i;
		if(arr[i].colour==RED)continue;
		int nxt=i+1;if(nxt==n)nxt=0;
		if(arr[nxt].colour==RED)nxt++;
		if(nxt==n)nxt=0;
		if(arr[i].c>arr[nxt].a)arr[i].colour=GREEN;
		else arr[i].colour=BLUE;
	}
	arr.push_back(arr[0]);
	for(int i=0;i<n;i++){
		if(arr[i].colour!=RED){
			if(arr[i+1].colour==RED)arr[i].redHere=arr[i+1].pos;
			belt.push_back(arr[i]);
		}
	}
	while(true){
		s.clear();reds.clear();
		for(int i=0;i<(int)belt.size();i++){
			animal A=belt[i];
			if(A.colour==BLUE)insert(A.b,A.pos,i);
			else insert(-inf,A.pos,i);
		}
		long long minMoves=inf;
		for(int i=0;i<(int)belt.size();i++){
			animal A=belt[i];
			if(A.colour==BLUE)insert(A.b,A.pos,i);
			else insert(-inf,A.pos,i);
			int red=A.redHere;if(red==-1)continue;
			reds.push_back(ii(red,i));
			auto early=lower_bound(s.begin(),s.end(),iii(arr[red].a,ii(-1,-1)));
			if(early==s.begin())continue;
			early--;
			long long distance=i-(early->second).second;
			if(distance<0)distance+=(belt.size());
			minMoves=min(distance,minMoves);
		}
		if(minMoves==inf){cout<<"-1 -1";return 0;}
		else if(minMoves!=0){
			totalMoves+=minMoves*(n-1);
			for(ii R:reds)belt[R.second].redHere=-1;
			for(ii R:reds){
				int pos=R.second;
				pos-=minMoves;if(pos<0)pos+=belt.size();
				belt[pos].redHere=R.first;
			}
		}
		ii ans=ii(inf,inf);
		for(int i=0;i<(int)belt.size();i++){
			if(belt[i].redHere==-1)continue;
			animal R=arr[belt[i].redHere];
			if(belt[i].b<R.a){
				belt[i].redHere=-1;
				belt.insert(belt.begin()+(i+1),R);
				if(belt[i].c>R.a)belt[i].colour=GREEN;
				else belt[i].colour=BLUE;
				int nxt=i+2;if(nxt==(int)belt.size())nxt=0;
				if(belt[i+1].c>belt[nxt].a)belt[i+1].colour=GREEN;
				else belt[i+1].colour=BLUE;
			}else if(belt[i].colour==GREEN)ans=min(ans,ii(totalMoves+R.pos+2,belt[i].id));
		}
		if(ans.first!=inf){cout<<ans.second<<" "<<ans.first;return 0;}
	}
}
