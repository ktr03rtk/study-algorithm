#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

vector<int> dx = {1, 0, -1, 0};
vector<int> dy = {0, 1, 0, -1};
int H, W;

// 幅優先探索
int bfs(const vector<string> &S, int x, int y) {
  vector<vector<int>> dist(H, vector<int>(W, -1));
  queue<pair<int, int>> que;

  int res = 0;
  que.push({x, y});
  dist[x][y] = 0;
  while (!que.empty()) {
    int x = que.front().first;
    int y = que.front().second;
    res = max(res, dist[x][y]);
    que.pop();
    rep(i, 0, 4) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
      if (S[nx][ny] == '#') continue;
      if (dist[nx][ny] == -1) {
        dist[nx][ny] = dist[x][y] + 1;
        que.push({nx, ny});
      }
    }
  }

  return res;
}

int main() {
  cin >> H >> W;

  vector<string> S(H);
  for (auto &s : S) cin >> s;

  int ans = 0;
  rep(i, 0, H) {
    rep(j, 0, W) {
      if (S[i][j] == '#') continue;
      ans = max(ans, bfs(S, i, j));
    }
  }

  cout << ans << endl;
}
