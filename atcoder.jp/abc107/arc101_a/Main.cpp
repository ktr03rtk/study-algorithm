#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> X(N);
  for (auto &x : X) cin >> x;

  vector<int> mn, mx;
  mn.push_back(0);
  mx.push_back(0);
  for (auto x : X) {
    if (x <= 0) {
      mn.push_back(abs(x));
    } else {
      mx.push_back(x);
    }
  }

  sort(mn.begin(), mn.end());
  sort(mx.begin(), mx.end());

  int n = mn.size();
  int m = mx.size();

  int ans = 1000000000;

  rep(i, 0, n) {
    int j = K - i;
    if (0 <= j && j < m) ans = min(ans, mn[i] * 2 + mx[j]);
  }
  rep(i, 0, m) {
    int j = K - i;
    if (0 <= j && j < n) ans = min(ans, mx[i] * 2 + mn[j]);
  }

  cout << ans << endl;
}
