#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  for (auto &s : S) cin >> s;

  vector<vector<int>> dp(H, vector<int>(W, 1000000000));
  if (S[0][0] == '#') {
    dp[0][0] = 1;
  } else {
    dp[0][0] = 0;
  }

  rep(x, 0, H) {
    rep(y, 0, W) {
      rep(k, 0, 2) {
        int nx, ny;
        if (k == 0) {
          nx = x + 1;
          ny = y;
        } else {
          nx = x;
          ny = y + 1;
        }

        if (nx >= H || ny >= W) continue;

        if (S[nx][ny] == '#' && S[x][y] == '.') {
          dp[nx][ny] = min(dp[nx][ny], dp[x][y] + 1);
        } else {
          dp[nx][ny] = min(dp[nx][ny], dp[x][y]);
        }
      }
    }
  }

  cout << dp[H - 1][W - 1] << endl;
}
