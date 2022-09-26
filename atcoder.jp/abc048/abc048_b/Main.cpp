#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll a, b, x;
  cin >> a >> b >> x;

  ll ans = b / x - a / x;
  if (a % x == 0) {
    ans += 1;
  }
  cout << ans << endl;
}
