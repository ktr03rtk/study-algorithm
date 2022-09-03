#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  vector<vector<int>> C(3, vector<int>(3));
  for (auto &c : C) {
    for (auto &cc : c) {
      cin >> cc;
    }
  }

  string ans = "No";

  rep(i, 0, 101) {
    int a2 = C[1][1] - (C[0][1] - i);
    int a3 = C[2][1] - (C[0][1] - i);

    bool pass = true;

    rep(j, 0, 3) {
      int bj = C[0][j] - i;
      if (a2 + bj != C[1][j] || a3 + bj != C[2][j]) {
        pass = false;
      }
    }

    if (pass) ans = "Yes";
  }

  cout << ans << endl;
}
