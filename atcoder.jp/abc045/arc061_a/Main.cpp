#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

// bit全探索
int main() {
  string S;
  cin >> S;
  int N = S.size();

  ll ans = 0;
  for (int bit = 0; bit < (1 << (N - 1)); bit++) {
    ll temp = 0;
    rep(i, 0, N - 1) {
      temp *= 10;
      temp += S[i] - '0';
      if (bit & (1 << i)) {
        ans += temp;
        temp = 0;
      }
    }
    temp *= 10;
    temp += S.back() - '0';
    ans += temp;
  }

  cout << ans << endl;
}
