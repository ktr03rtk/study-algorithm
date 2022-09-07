#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N, M;
  cin >> N >> M;

  ll ans = 0;

  ans = min(N, M / 2);

  ll rest = M - 2 * N;

  if (rest > 0) {
    ans += rest / 4;
  }

  cout << ans << endl;
}
