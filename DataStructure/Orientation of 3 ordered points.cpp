#include<bits/stdc++.h>
using namespace std;
struct Point{
  int x,y;
};
/*
0 : collinear
1 : clockwise
2 : counterclockwise
*/
int orientation(Point p1,Point p2,Point p3){
  int val=(p2.y-p1.y)*(p3.x-p2.x)-(p3.y-p2.y)*(p2.x-p1.x);
  if(val==0)return 0;
  return val>0?1:2;
}
int main(){
  
}
