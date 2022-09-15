#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll x;
  cin >> x;

  ll ans = x / 11 * 2;

  ll val = x % 11;
  if (val > 6) {
    ans += 2;
  } else if (val > 0) {
    ans++;
  }

  cout << ans << endl;
}
