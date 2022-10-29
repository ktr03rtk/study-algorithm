#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int n = 9;
  vector<string> S(n);
  for (auto &s : S) cin >> s;
  int ans = 0;

  rep(h, 0, n) {
    rep(w, 0, n) {
      rep(i, -8, n) {
        rep(j, 1, n) {
          if (h + i < 0 || h + i >= n || w + j >= n || h + j >= n ||
              w - i < 0 || w - i >= n || h + i + j < 0 || h + i + j >= n ||
              w + j - i < 0 || w + j - i >= n) {
            continue;
          }
          if (S[h][w] == '#' && S[h + i][w + j] == '#' &&
              S[h + j][w - i] == '#' && S[h + i + j][w + j - i] == '#') {
            ans++;
            if (i == 0) ans++;
          }
        }
      }
    }
  }
  cout << ans / 2 << endl;
}
