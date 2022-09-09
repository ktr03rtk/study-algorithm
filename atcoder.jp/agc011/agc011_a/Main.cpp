#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N, C, K;
  cin >> N >> C >> K;

  vector<ll> T(N);
  for (auto &t : T) cin >> t;
  sort(T.begin(), T.end());

  ll ans = 0;
  ll limit = T[0] + K;
  ll count = 0;

  rep(i, 0, N) {
    if (count == C || limit < T[i]) {
      ans++;
      limit = T[i] + K;
      count = 0;
    }
    count++;
  }

  if (count > 0) ans++;

  cout << ans << endl;
}
