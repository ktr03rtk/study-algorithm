#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll Q, H, S, D, N;
  cin >> Q >> H >> S >> D >> N;

  ll SS = min(4 * Q, 2 * H);
  ll SSS = min(SS, S);

  ll ans = 0;

  if (2 * SSS < D) {
    ans = SSS * N;
  } else {
    ans = N / 2 * D + N % 2 * SSS;
  }

  cout << ans << endl;
}
