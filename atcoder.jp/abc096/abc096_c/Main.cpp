#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> S(H);
  rep(i, 0, H) { cin >> S[i]; }

  vector<int> dx = {1, 0, -1, 0};
  vector<int> dy = {0, 1, 0, -1};

  string ans = "Yes";

  rep(y, 0, H) {
    rep(x, 0, W) {
      if (S[y][x] != '#') continue;

      bool pass = false;
      rep(k, 0, 4) {
        int xx = x + dx[k];
        int yy = y + dy[k];

        if (yy < 0 || yy >= H || xx < 0 || xx >= W) continue;

        if (S[yy][xx] == '#') pass = true;
      }

      if (!pass) ans = "No";
    }
  }

  cout << ans << endl;
}
