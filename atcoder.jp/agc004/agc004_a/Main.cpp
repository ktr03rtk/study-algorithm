#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll A, B, C;
  cin >> A >> B >> C;

  ll ans = 1000000000000000000;

  ans = min(ans, A * B * ((C + 1) / 2 - C / 2));
  ans = min(ans, A * C * ((B + 1) / 2 - B / 2));
  ans = min(ans, B * C * ((A + 1) / 2 - A / 2));

  cout << ans << endl;
}
