#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

int main() {
  int N;
  cin >> N;
  vector<int> X(N), Y(N);
  rep(i, 0, N) cin >> X[i] >> Y[i];

  int ans = 1000000000;

  if (N == 1) {
    cout << 1 << endl;
    return 0;
  }

  rep(i, 0, N) {
    rep(j, 0, N) {
      if (i == j) continue;
      int dx = X[i] - X[j];
      int dy = Y[i] - Y[j];

      int val = 0;
      rep(i2, 0, N) {
        rep(j2, 0, N) {
          if (i2 == j2) continue;
          int dx2 = X[i2] - X[j2];
          int dy2 = Y[i2] - Y[j2];
          if (dx == dx2 && dy == dy2) val++;
        }
      }

      ans = min(ans, N - val);
    }
  }

  cout << ans << endl;
}
