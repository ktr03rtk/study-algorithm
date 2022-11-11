#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int N;
const int INF = (1 << 29);
vector<int> G[1 << 18];
int dist[1 << 18];

void bfs(int start) {
  for (int i = 1; i < N + 1; i++) dist[i] = INF;
  queue<int> Q;
  Q.push(start);
  dist[start] = 0;

  while (!Q.empty()) {
    int pos = Q.front();
    Q.pop();
    for (auto to : G[pos]) {
      if (dist[to] == INF) {
        dist[to] = dist[pos] + 1;
        Q.push(to);
      }
    }
  }
}

int main() {
  cin >> N;

  rep(i, 0, N - 1) {
    int u, v;
    cin >> u >> v;

    G[u].push_back(v);
    G[v].push_back(u);
  }

  bfs(1);
  int maxid = -1;
  int maxdist = -1;
  rep(i, 1, N + 1) {
    if (maxdist < dist[i]) {
      maxdist = dist[i];
      maxid = i;
    }
  }

  bfs(maxid);
  int ans = -1;
  rep(i, 1, N + 1) { ans = max(ans, dist[i]); }

  cout << ans + 1 << endl;
}
