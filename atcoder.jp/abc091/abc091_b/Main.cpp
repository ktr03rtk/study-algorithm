#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N;
  vector<string> S(N);
  for (auto &s : S) cin >> s;

  vector<string> T(M);
  cin >> M;
  for (auto &t : T) cin >> t;

  map<string, int> m;

  for (auto s : S) m[s]++;
  for (auto t : T) m[t]--;

  int ans = 0;

  for (auto mm : m) {
    ans = max(ans, mm.second);
  }

  cout << ans << endl;
}
