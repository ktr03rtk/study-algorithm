#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int H, W;
bool pass = false;
vector<vector<bool>> visited;
int sh, sw;
vector<string> C;
vector<int> dh = {1, 0, -1, 0};
vector<int> dw = {0, 1, 0, -1};

void dfs(int h, int w, int c) {
  visited[h][w] = true;
  int count = c + 1;

  rep(i, 0, 4) {
    int nh = h + dh[i];
    int nw = w + dw[i];
    if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;

    if (C[nh][nw] == '#') continue;
    if (C[nh][nw] == 'S' && count >= 4) pass = true;
    if (C[nh][nw] == '.' && !visited[nh][nw]) dfs(nh, nw, count);
  }
}

int main() {
  cin >> H >> W;
  C.resize(H);
  visited.resize(H);
  for (auto &c : C) cin >> c;

  rep(i, 0, H) {
    rep(j, 0, W) {
      visited[i].push_back(false);
      if (C[i][j] == 'S') {
        sh = i;
        sw = j;
      }
    }
  }

  dfs(sh, sw, 0);
  cout << (pass ? "Yes" : "No") << endl;
}
