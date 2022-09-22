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
  ll N;
  cin >> N;

  const ll MOD = 1000000007;
  vector<ll> ex(N + 1, 0);
  for (ll i = 2; i <= N; i++) {
    const auto &res = prime_factorize(i);
    for (auto r : res) {
      ex[r.first] += r.second;
    }
  }

  ll ans = 1;
  for (ll i = 2; i <= N; i++) {
    ans *= ex[i] + 1;
    ans %= MOD;
  }

  cout << ans << endl;
}
