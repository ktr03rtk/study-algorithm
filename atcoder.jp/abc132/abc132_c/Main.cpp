#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;

  vector<int> d(n);

  rep(i, 0, n) { cin >> d[i]; }

  sort(d.begin(), d.end());

  int ans = 0;

  rep(i, 1, d.back() + 1) {
    auto it = lower_bound(d.begin(), d.end(), i);
    if (it - d.begin() == n / 2) {
      ans++;
    }
  }

  cout << ans << endl;
}
