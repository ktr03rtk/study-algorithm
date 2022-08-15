#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main() {
  vector<vector<int>> a(3, vector<int>(3));
  rep(i, 3) {
    rep(j, 3) { cin >> a[i][j]; }
  }

  int n;
  cin >> n;

  vector<int> b(n);
  rep(i, n) { cin >> b[i]; }

  vector<vector<bool>> bingo(3, vector<bool>(3, false));

  rep(i, n) {
    rep(j, 3) {
      rep(k, 3) {
        if (a[j][k] == b[i]) {
          bingo[j][k] = true;
        }
      }
    }
  }

  bool result = false;
  if (bingo[0][0] == true) {
    if ((bingo[0][1] == true && bingo[0][2]) ||
        (bingo[1][0] == true && bingo[2][0])) {
      result = true;
    }
  }
  if (bingo[2][2] == true) {
    if ((bingo[0][2] == true && bingo[1][2]) ||
        (bingo[2][0] == true && bingo[2][1])) {
      result = true;
    }
  }
  if (bingo[1][1] == true) {
    if ((bingo[0][0] == true && bingo[2][2]) ||
        (bingo[2][0] == true && bingo[0][2]) ||
        (bingo[1][0] == true && bingo[1][2]) ||
        (bingo[0][1] == true && bingo[2][1])) {
      result = true;
    }
  }

  cout << (result ? "Yes" : "No") << endl;
}
