#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

bool visited[10000000];
vector<vector<int>> G(1000000);
deque<int> deq;
bool stop;

// 深さ優先探索 グラフ
void dfs(int pos, int to) {
  if (!stop) deq.push_back(pos);

  if (pos == to) stop = true;

  visited[pos] = true;

  for (int i = 0; i < G[pos].size(); i++) {
    if (!visited[G[pos][i]]) dfs(G[pos][i], to);
  }

  if (!stop) deq.pop_back();
  return;
}

int main() {
  int N, X, Y;
  cin >> N >> X >> Y;

  rep(i, 0, N - 1) {
    int u, v;
    cin >> u >> v;
    // --u, --v;

    G[u].push_back(v);
    G[v].push_back(u);
  }

  for (int i = 1; i <= N; i++) visited[i] = false;
  stop = false;

  dfs(X, Y);

  while (!deq.empty()) {
    cout << deq.front();
    deq.pop_front();
    if (deq.empty()) {
      cout << endl;
    } else {
      cout << " ";
    }
  }
}
