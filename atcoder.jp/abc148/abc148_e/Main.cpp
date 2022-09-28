#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  if (N % 2 == 1) {
    cout << 0 << endl;
    return 0;
  }

  ll ans = N / 10;
  N /= 10;

  ll p5 = 5;
  while (p5 <= N) {
    ans += N / p5;
    p5 = p5 * 5;
  }
  cout << ans << endl;
}
