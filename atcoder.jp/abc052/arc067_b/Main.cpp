#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

int main() {
  ll N, A, B;
  cin >> N >> A >> B;
  vector<ll> X(N);
  for (auto &x : X) cin >> x;

  ll ans = 0;
  rep(i, 1, N) {
    if ((X[i] - X[i - 1]) * A > B) {
      ans += B;
    } else {
      ans += (X[i] - X[i - 1]) * A;
    }
  }

  cout << ans << endl;
}
