#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

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
  ll A, B;
  cin >> A >> B;
  ll g = gcd(A, B);

  const auto &res = prime_factorize(g);
  ll ans = res.size() + 1;
  for (auto r : res) {
  }

  cout << ans << endl;
}
