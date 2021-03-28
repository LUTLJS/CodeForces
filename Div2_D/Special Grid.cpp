#include <bits/stdc++.h>
using namespace std;
const int N =402;
int n, m;
string s[N];
bool a[N][N], b[N][N];
long long g(bool a[N][N], int n, int m) {
  int right[N][N]={}, rd[N][N]={}, ld[N][N]={}, down[N][N]={};
  for (int i = 0; i < n; ++i)
    // from right to left
    for (int j = m - 1; j >= 0; --j)(right[i][j] = a[i][j] ? 0 : right[i][j + 1] + 1);
  for (int j = 0; j < m; ++j)
    // from bottom to top
    for (int i = n - 1; i >= 0; --i)(down[i][j] = a[i][j] ? 0 : down[i + 1][j] + 1);
  for (int i = n - 1; i >= 0; --i)
    //from right bottom to left top
    for (int j = m - 1; j >= 0; --j)(rd[i][j] = a[i][j] ? 0 : rd[i + 1][j + 1] + 1);
  for (int i = n - 1; i >= 0; --i) {
    // form left bottom to right top
    ld[i][0] = a[i][0] ? 0 : 1;
    for (int j = 1; j < m; ++j)(ld[i][j] = a[i][j] ? 0 : ld[i + 1][j - 1] + 1);
  }
  long long ret = 0;
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j) {
      for (int k = 1; k < min(rd[i][j], down[i][j]); ++k) {
        int ni = k + i;if (right[ni][j] >= k)++ret;
      }
      for (int k = 1; k < min(rd[i][j], ld[i][j]); ++k) {
        int ni = i + k,nj = j - k;if (right[ni][nj] >= 2 * k + 1)++ret;
      }
    }
  return ret;
}

void r(bool a[N][N], bool b[N][N], int n, int m) {
  for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j)b[j][n - i - 1] = a[i][j];
}

int main() {
  cin>>n>>m;
  for (int i = 0; i < n; ++i)cin>>s[i];
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j)
      // 1 for black,0 for white
      a[i][j] = s[i][j] == '1';
  long long ans = g(a, n, m);
  r(a, b, n, m);ans += g(b, m, n);
  r(b, a, m, n);ans += g(a, n, m);
  r(a, b, n, m);ans += g(b, m, n);
  cout<<ans;
  return 0;
}
