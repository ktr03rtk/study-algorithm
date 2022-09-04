#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<double> P(N);
  for (auto &p : P) cin >> p;

  vector<double> E;

  for (auto p : P) {
    E.push_back((double)(p * (p + 1) / 2 / p));
  }

  double ans = 0;

  rep(i, 0, K) { ans += E[i]; }

  double tmp = ans;

  rep(i, 0, N - K) {
    tmp = tmp - E[i] + E[K + i];
    ans = max(ans, tmp);
  }

  cout << fixed << setprecision(10) << ans << endl;
}
