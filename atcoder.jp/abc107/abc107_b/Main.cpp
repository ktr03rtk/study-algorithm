#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> A(H);
  rep(i, 0, H) { cin >> A[i]; }

  vector<int> X;
  vector<int> Y;

  rep(i, 0, H) {
    bool pass = true;
    rep(j, 0, W) {
      if (A[i][j] == '#') pass = false;
    }
    if (pass) Y.push_back(i);
  }

  rep(i, 0, W) {
    bool pass = true;
    rep(j, 0, H) {
      if (A[j][i] == '#') pass = false;
    }
    if (pass) X.push_back(i);
  }

  rep(i, 0, H) {
    if (find(Y.begin(), Y.end(), i) == Y.end()) {
      rep(j, 0, W) {
        if (find(X.begin(), X.end(), j) == X.end()) {
          { cout << A[i][j]; }
        }
      }
      cout << endl;
    }
  }
}
