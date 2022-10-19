#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

int main() {
  ll N, M;
  cin >> N >> M;

  vector<ll> V;
  for (ll i = 1; i * i <= M; i++) {
    if (M % i == 0) {
      V.push_back(i);
      ll j = M / i;
      if (j != i) V.push_back(j);
    }
  }

  ll ans = 1;
  for (auto v : V) {
    if (v * N <= M) ans = max(ans, v);
  }

  cout << ans << endl;
}
