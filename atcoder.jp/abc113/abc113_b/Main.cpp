#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  double N, T, A;
  cin >> N >> T >> A;

  vector<double> H(N);
  for (auto &h : H) cin >> h;

  double val = 100000000;
  int ans = 0;

  rep(i, 0, N) {
    if (val > abs(A - (T - 0.006 * H[i]))) {
      val = abs(A - (T - 0.006 * H[i]));
      ans = i + 1;
    }
  }

  cout << ans << endl;
}
