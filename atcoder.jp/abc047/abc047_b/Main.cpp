#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int W, H, N;
  cin >> W >> H >> N;

  vector<int> X(W, 1);
  vector<int> Y(H, 1);

  rep(i, 0, N) {
    int x, y, a;
    cin >> x >> y >> a;

    if (a == 1) {
      rep(j, 0, x) { X[j] = 0; }
    } else if (a == 2) {
      rep(j, x, W) { X[j] = 0; }
    } else if (a == 3) {
      rep(j, 0, y) { Y[j] = 0; }
    } else if (a == 4) {
      rep(j, y, H) { Y[j] = 0; }
    }
  }

  int w, h;
  w = count(X.begin(), X.end(), 1);
  h = count(Y.begin(), Y.end(), 1);

  cout << w * h << endl;
}
