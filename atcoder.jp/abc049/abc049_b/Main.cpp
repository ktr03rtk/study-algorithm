#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  vector<vector<char>> C(2 * H, vector<char>(W));

  rep(i, 0, H) {
    rep(j, 0, W) {
      cin >> C[2 * i][j];
      C[2 * i + 1][j] = C[2 * i][j];
    }
  }

  rep(i, 0, 2 * H) {
    rep(j, 0, W) { cout << C[i][j]; }
    cout << endl;
  }
}
