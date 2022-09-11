#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> T(N);
  for (auto &t : T) cin >> t;

  ll ans = T[0];
  rep(i, 0, N) { ans = lcm(ans, T[i]); }

  cout << ans << endl;
}
