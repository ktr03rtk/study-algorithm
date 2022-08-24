#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  vector<int> a(3 * N);
  for (auto &aa : a) cin >> aa;
  sort(a.begin(), a.end(), greater<int>{});

  ll ans = 0;

  for (ll i = 1; i < 2 * N; i = i + 2) {
    ans += a[i];
  }

  cout << ans << endl;
}
