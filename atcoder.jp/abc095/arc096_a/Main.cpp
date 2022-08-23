#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll A, B, C, X, Y;
  cin >> A >> B >> C >> X >> Y;

  ll ans = 100000000000;

  rep(i, 0, max(2 * X, 2 * Y) + 1) {
    ll a = max(ll(0), X - i / 2);
    ll b = max(ll(0), Y - i / 2);
    ll val = A * a + B * b + C * i;
    ans = min(ans, val);
  }

  cout << ans << endl;
}
