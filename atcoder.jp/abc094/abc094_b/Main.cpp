#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int n, m, x;
  cin >> n >> m >> x;

  vector<int> a(m);

  rep(i, 0, m) { cin >> a[i]; }

  auto it = lower_bound(a.begin(), a.end(), x);

  int ans = min(it - a.begin(), a.end() - it);

  cout << ans << endl;
}
