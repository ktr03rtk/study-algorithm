#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> S(H);
  for (auto &s : S) cin >> s;
  // マス移動
  vector<int> dx = {1, 1, 0, -1, -1, -1, 0, 1};
  vector<int> dy = {0, -1, -1, -1, 0, 1, 1, 1};
  int n = dx.size();

  rep(y, 0, H) {
    rep(x, 0, W) {
      if (S[y][x] == '#') {
        continue;
      }

      int count = 0;
      rep(k, 0, n) {
        if (y + dy[k] < 0 || y + dy[k] >= H || x + dx[k] < 0 ||
            x + dx[k] >= W) {
          continue;
        }
        if (S[y + dy[k]][x + dx[k]] == '#') {
          count++;
        }
      }

      S[y][x] = '0' + count;
    }
  }

  rep(i, 0, H) { cout << S[i] << endl; }
}
