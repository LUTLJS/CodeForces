for(int i=1;i<=n;i++)link[i]=i;
for(int i=1;i<=n;i++)size[i]=1;

int find(int x){
  while(x!=link[x])x=link[x];
  retrun x;
}

bool same(int a,int b){
  return find(a)==find(b);
}

bool unite(int a,int b){
  a=find(a);b=find(b);
  if(size[a]<size[b])swap(a,b);
  size[a]+=size[b];
  link[b]=a;
}
