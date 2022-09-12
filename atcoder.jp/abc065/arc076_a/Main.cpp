#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N, M;
  cin >> N >> M;

  if (abs(N - M) >= 2) {
    cout << 0 << endl;
    return 0;
  }

  ll ans = 1;
  rep(i, 1, N + 1) {
    ans *= i;
    ans %= 1000000007;
  }
  rep(i, 1, M + 1) {
    ans *= i;
    ans %= 1000000007;
  }

  if (N == M) {
    ans *= 2;
    ans %= 1000000007;
  }

  cout << ans << endl;
}
