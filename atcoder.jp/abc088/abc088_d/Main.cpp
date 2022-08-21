#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int N, M, Q;
vector<ll> a, b, c, d;

// 幅優先探索
int main() {
  vector<int> DX = {1, 0, -1, 0};
  vector<int> DY = {0, 1, 0, -1};

  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  for (auto &s : S) cin >> s;

  queue<pair<int, int>> que;
  vector<vector<int>> distance(H, vector<int>(W, -1));

  que.push({0, 0});
  distance[0][0] = 0;

  while (!que.empty()) {
    pair<int, int> tmp = que.front();
    que.pop();
    int x = tmp.first;
    int y = tmp.second;

    // 上下左右の移動を試す
    rep(i, 0, 4) {
      int x2 = x + DX[i], y2 = y + DY[i];

      // 範囲外参照を除外
      if (x2 < 0 || x2 >= H || y2 < 0 || y2 >= W) continue;

      // 黒マスを除外
      if (S[x2][y2] == '#') continue;

      // 探索済はスキップ
      if (distance[x2][y2] != -1) continue;

      que.push({x2, y2});
      distance[x2][y2] = distance[x][y] + 1;
    }
  }

  int white = 0;
  rep(i, 0, H) {
    rep(j, 0, W) {
      if (S[i][j] == '.') white++;
    }
  }

  if (distance[H - 1][W - 1] != -1) {
    cout << white - (distance[H - 1][W - 1] + 1) << endl;
  } else {
    cout << -1 << endl;
  }
}
