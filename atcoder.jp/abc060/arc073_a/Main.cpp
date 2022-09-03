#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, T;
  cin >> N >> T;

  vector<int> t(N);
  for (auto &tt : t) cin >> tt;

  ll ans = 0;

  rep(i, 0, t.size() - 1) { 
    ans += min(T, t[i + 1] - t[i]);
  }

  ans += T;

  cout << ans << endl;
}
