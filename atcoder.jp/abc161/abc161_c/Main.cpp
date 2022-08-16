#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll n, k;
  cin >> n >> k;

  ll ans = n % k;
  ans = min(ans, k - ans);

  cout << ans << endl;
}
