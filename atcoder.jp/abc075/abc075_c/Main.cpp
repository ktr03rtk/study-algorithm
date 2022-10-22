#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

const int limit = 50;
int N, M;
int A[limit], B[limit];
bool G[limit][limit];
bool visited[limit];

void dfs(int pos) {
  visited[pos] = true;

  rep(i, 0, N) {
    if (G[pos][i] == false) continue;
    if (!visited[i]) dfs(i);
  }
}

// グラフ
// 連結判定
// 深さ優先
int main() {
  cin >> N >> M;
  rep(i, 0, M) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    A[i] = a;
    B[i] = b;
    G[a][b] = true;
    G[b][a] = true;
  }

  int ans = 0;
  rep(i, 0, M) {
    G[A[i]][B[i]] = G[B[i]][A[i]] = false;

    rep(j, 0, N) visited[j] = false;

    dfs(0);

    bool bridge = false;
    rep(j, 0, N) {
      if (visited[j] == false) bridge = true;
    }
    if (bridge) ans += 1;
    G[A[i]][B[i]] = G[B[i]][A[i]] = true;
  }

  cout << ans << endl;
}
