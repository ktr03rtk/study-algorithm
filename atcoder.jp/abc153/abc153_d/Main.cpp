#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

ll f(ll n) {
  if (n == 1) {
    return 1;
  }

  return 2 * (f(n / 2)) + 1;
}

int main() {
  ll h;
  cin >> h;

  ll ans = 0;

  ans += f(h);

  cout << ans << endl;
}
