long long p(int n,int k)
{
    if (k>n) return 0;
    if (k*2>n) k=n-k;
    if (k==0) return 1;
    long long r=n;
    for(int i=2;i<=k;i++) {
        r*=(n-i+1);
        r/=i;
    }
    return r;
}
