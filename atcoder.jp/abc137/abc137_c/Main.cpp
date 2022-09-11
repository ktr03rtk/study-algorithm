#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> S(N);
  for (auto &s : S) cin >> s;

  map<string, ll> m;
  for (auto s : S) {
    sort(s.begin(), s.end());
    m[s]++;
  }

  ll ans = 0;
  for (auto mm : m) {
    ans += mm.second * (mm.second - 1) / 2;
  }

  cout << ans << endl;
}
