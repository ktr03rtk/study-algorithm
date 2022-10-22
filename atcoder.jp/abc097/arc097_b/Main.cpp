#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

struct UnionFind {
  vector<int> par;

  UnionFind(int N) : par(N) { rep(i, 0, N) par[i] = i; }

  int root(int x) {
    if (par[x] == x) return x;
    return par[x] = root(par[x]);
  }

  void unite(int x, int y) {
    int rx = root(x);
    int ry = root(y);
    if (rx == ry) return;
    par[rx] = ry;
  }

  bool same(int x, int y) {
    int rx = root(x);
    int ry = root(y);
    return rx == ry;
  }
};

// union-find
int main() {
  int N, M;
  cin >> N >> M;
  vector<int> P(N);
  for (auto &p : P) cin >> p;

  UnionFind tree(N);

  rep(i, 0, M) {
    int x, y;
    cin >> x >> y;
    tree.unite(x - 1, y - 1);
  }

  int ans = 0;
  rep(i, 0, N) {
    if (tree.same(i, P[i] - 1)) {
      ans++;
    }
  }

  cout << ans << endl;
}
