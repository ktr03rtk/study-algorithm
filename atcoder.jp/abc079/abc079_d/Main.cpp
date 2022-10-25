#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

// ワーシャルフロイド法
int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> V(10, vector<int>(10, 1000000000));

  rep(i, 0, 10) {
    rep(j, 0, 10) { cin >> V[i][j]; }
  }

  rep(k, 0, 10) {
    rep(i, 0, 10) {
      rep(j, 0, 10) { V[i][j] = min(V[i][j], V[i][k] + V[k][j]); }
    }
  }

  ll ans = 0;
  rep(i, 0, H) {
    rep(j, 0, W) {
      int A;
      cin >> A;
      if (A == -1) continue;
      ans += V[A][1];
    }
  }

  cout << ans << endl;
}
