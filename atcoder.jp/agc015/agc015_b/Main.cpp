#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int N = S.size();
  ll ans = 0;

  rep(i, 0, N) {
    if (S[i] == 'U') {
      ans += N - i - 1 + 2 * i;
    } else {
      ans += 2 * (N - i - 1) + i;
    }
  }

  cout << ans << endl;
}
