#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, D;
  cin >> N >> D;

  vector<vector<int>> X(N, vector<int>(D));
  rep(i, 0, N) {
    rep(j, 0, D) { cin >> X[i][j]; }
  }

  int ans = 0;

  rep(i, 0, N - 1) {
    rep(j, i + 1, N) {
      int val = 0;
      rep(k, 0, D){val += pow(X[i][k] - X[j][k], 2);}

      double v = sqrt(val);

      if (floor(v) == v) {
        ans++;
      }
    }
  }

  cout << ans << endl;
}
