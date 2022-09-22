#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

// 素因数分解
vector<pair<ll, ll>> prime_factorize(ll N) {
  vector<pair<ll, ll>> res;
  for (ll i = 2; i * i <= N; i++) {
    if (N % i != 0) continue;
    ll ex = 0;
    while (N % i == 0) {
      ex++;
      N /= i;
    }

    res.push_back({i, ex});
  }
  if (N != 1) res.push_back({N, 1});
  return res;
}

int main() {
  ll N, P;
  cin >> N >> P;

  const auto &res = prime_factorize(P);

  ll ans = 1;
  for (auto r : res) {
    rep(i, 0, r.second / N) ans *= r.first;
  }

  cout << ans << endl;
}
