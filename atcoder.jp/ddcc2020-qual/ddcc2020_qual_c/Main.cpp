#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int H, W, K;
  cin >> H >> W >> K;

  vector<vector<int>> V(H, vector<int>(W, 0));
  int count = 1;
  rep(i, 0, H) {
    rep(j, 0, W) {
      char c;
      cin >> c;
      if (c == '#') {
        V[i][j] = count;
        count++;
      }
    }
  }
  rep(i, 0, H) {
    rep(j, 1, W) {
      if (V[i][j] == 0) V[i][j] = V[i][j - 1];
    }
  }
  rep(i, 0, H) {
    for (int j = W - 2; j >= 0; j--) {
      if (V[i][j] == 0) V[i][j] = V[i][j + 1];
    }
  }
  rep(i, 1, H) {
    rep(j, 0, W) {
      if (V[i][j] == 0) V[i][j] = V[i - 1][j];
    }
  }
  for (int i = H - 2; i >= 0; i--) {
    rep(j, 0, W) {
      if (V[i][j] == 0) V[i][j] = V[i + 1][j];
    }
  }

  rep(i, 0, H) {
    rep(j, 0, W) {
      if (j) cout << " ";
      cout << V[i][j];
    }
    cout << endl;
  }
}
