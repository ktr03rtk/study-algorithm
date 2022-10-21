#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> V(H);
  for (auto &v : V) cin >> v;

  vector<vector<int>> Left(H, vector<int>(W, 0)), Right(H, vector<int>(W, 0)),
      Up(H, vector<int>(W, 0)), Down(H, vector<int>(W, 0));

  rep(i, 0, H) {
    int cur = 0;
    rep(j, 0, W) {
      if (V[i][j] == '#') {
        cur = 0;
      } else {
        cur++;
      }
      Left[i][j] = cur;
    }
  }

  rep(i, 0, H) {
    int cur = 0;
    for (int j = W - 1; j >= 0; j--) {
      if (V[i][j] == '#') {
        cur = 0;
      } else {
        cur++;
      }
      Right[i][j] = cur;
    }
  }

  rep(j, 0, W) {
    int cur = 0;
    rep(i, 0, H) {
      if (V[i][j] == '#') {
        cur = 0;
      } else {
        cur++;
      }
      Up[i][j] = cur;
    }
  }

  rep(j, 0, W) {
    int cur = 0;
    for (int i = H - 1; i >= 0; i--) {
      if (V[i][j] == '#') {
        cur = 0;
      } else {
        cur++;
      }
      Down[i][j] = cur;
    }
  }

  int ans = 0;
  rep(i, 0, H) {
    rep(j, 0, W) {
      if (V[i][j] == '#') continue;
      ans = max(ans, Left[i][j] + Right[i][j] + Up[i][j] + Down[i][j] - 3);
    }
  }

  cout << ans << endl;
}
