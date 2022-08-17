#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> L(M);
  vector<int> R(M);
  rep(i, 0, M) { cin >> L[i] >> R[i]; }

  int lmax = *max_element(L.begin(), L.end());
  int rmin = *min_element(R.begin(), R.end());

  int ans = 0;

  if (lmax <= rmin) {
    ans = rmin - lmax + 1;
  }
  cout << ans << endl;
}
