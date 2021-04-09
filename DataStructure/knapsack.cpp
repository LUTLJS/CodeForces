/*
given a set of objects, find subsets with some properties.
either use the current object or not use it.
dp[i][j]:
*/
possible[0]=true;
for(int k=1;k<=n;k++)
  for(int x=w;x>=0;x--)if(possible[x])possible[x+w[k]])=true;
