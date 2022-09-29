#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll MOD = 998244353;
  ll N;
  cin >> N;

  vector<ll> D(N);
  for (auto &d : D) cin >> d;
  if (D[0] != 0) {
    cout << 0 << endl;
    return 0;
  }

  ll m = *max_element(begin(D), end(D));
  vector<ll> V(m + 1, 0);
  rep(i, 0, N) { V[D[i]]++; }

  if (V[0] != 1) {
    cout << 0 << endl;
    return 0;
  }

  ll ans = 1;
  rep(i, 1, V.size() - 1) {
    rep(j, 0, V[i + 1]) {
      ans *= V[i];
      ans %= MOD;
    }
  }
  cout << ans << endl;
}
