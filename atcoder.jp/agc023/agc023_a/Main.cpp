#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

int main() {
  ll N;
  cin >> N;
  vector<ll> A(N), B(N + 1);
  for (auto &a : A) cin >> a;

  B[0] = 0;
  rep(i, 0, N) { B[i + 1] = B[i] + A[i]; }

  map<ll, ll> m;
  rep(i, 0, N + 1) m[B[i]]++;

  ll ans = 0;
  for (auto mm : m) {
    ll val = mm.second;
    ans += val * (val - 1) / 2;
  }

  cout << ans << endl;
}
