#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int n, d, x;
  cin >> n >> d >> x;
  vector<int> a(n);
  rep(i, 0, n) { cin >> a[i]; }

  int ans = x;

  rep(i, 0, n) { ans += (d - 1) / a[i] + 1; }

  cout << ans << endl;
}
