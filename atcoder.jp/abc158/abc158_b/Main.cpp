#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll n, a, b;
  cin >> n >> a >> b;

  ll ans = 0;

  ans += n / (a + b) * a;

  ll c = n % (a + b);
  if (c < a) {
    ans += c;
  } else {
    ans += a;
  }

  cout << ans << endl;
}
