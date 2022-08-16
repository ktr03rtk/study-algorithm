#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  rep(i, 0, n) { cin >> a[i]; }

  sort(a.begin(), a.end());

  int ans = 0;

  rep(i, 0, n) {
    if (x >= a[i]) {
      x -= a[i];
      ans++;
    } else {
      break;
    }
  }

  if (ans == n && x > 0) {
    ans--;
  }

  cout << ans << endl;
}
