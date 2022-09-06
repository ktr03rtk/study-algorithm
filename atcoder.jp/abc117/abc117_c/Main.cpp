#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> X(M);
  for (auto &x : X) cin >> x;

  sort(X.begin(), X.end());

  vector<int> d;
  rep(i, 0, M - 1) d.push_back(X[i + 1] - X[i]);
  sort(d.begin(), d.end());

  int ans = 0;
  int count = max(0, M - N);
  rep(i, 0, count) ans += d[i];

  cout << ans << endl;
}
