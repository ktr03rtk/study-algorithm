#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  vector<vector<char>> A(H + 2, vector<char>(W + 2, '#'));
  rep(i, 1, H + 1) {
    rep(j, 1, W + 1) { cin >> A[i][j]; }
  }

  rep(i, 0, H + 2) {
    rep(j, 0, W + 2) { cout << A[i][j]; }
    cout << endl;
  }
}
