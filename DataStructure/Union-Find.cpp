/*
the array link contains for each element the next element in the chain or the element itself if it is a representative
the array size indicates  for each representative the size of the corresponding set
*/
for(int i=1;i<=n;i++)link[i]=i;
for(int i=1;i<=n;i++)size[i]=1;

// return the representative for an element x
int find(int x){
  while(x!=link[x])x=link[x];
  retrun x;
}
// checks whether elements a and b belong to the same set.
bool same(int a,int b){
  return find(a)==find(b);
}
// unite joins thhe sets that contain elements a and b(the elements have to be in different sets)
// connects the smaller set to the larger set
bool unite(int a,int b){
  a=find(a);b=find(b);
  if(size[a]<size[b])swap(a,b);
  size[a]+=size[b];
  link[b]=a;
}
