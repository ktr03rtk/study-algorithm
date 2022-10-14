#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

// ビット全探索
int main() {
  int N;
  cin >> N;
  vector<vector<pair<int, int>>> V;
  V.resize(N);
  rep(i, 0, N) {
    int A;
    cin >> A;
    V[i].resize(A);
    rep(j, 0, A) {
      cin >> V[i][j].first >> V[i][j].second;
      --V[i][j].first;
    }
  }

  int ans = 0;

  rep(bit, 0, (1 << N)) {
    bool pass = true;
    rep(i, 0, N) {
      if (!(bit & (1 << i))) continue;

      for (auto v : V[i]) {
        int x = v.first;
        int y = v.second;

        if (y == 1 && !(bit & (1 << x))) pass = false;
        if (y == 0 && bit & (1 << x)) pass = false;
      }
    }

    if (pass) {
      int count = 0;
      rep(i, 0, N) {
        if (bit & (1 << i)) ++count;
      }
      ans = max(ans, count);
    }
  }
  cout << ans << endl;
}
