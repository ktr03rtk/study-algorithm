#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, M, Q;
  cin >> N >> M >> Q;

  vector<vector<int>> G(N);
  // 有向グラフ
  rep(i, 0, M) {
    int u, v;
    cin >> u >> v;
    --u, --v;

    G[u].push_back(v);
    G[v].push_back(u);
  }

  vector<int> colours(N);
  for (auto &c : colours) cin >> c;

  rep(i, 0, Q) {
    int t, x;
    cin >> t >> x;

    --x;

    cout << colours[x] << endl;

    if (t == 1) {
      for (auto g : G[x]) {
        colours[g] = colours[x];
      }
    } else {
      int y;
      cin >> y;
      colours[x] = y;
    }
  }
}
