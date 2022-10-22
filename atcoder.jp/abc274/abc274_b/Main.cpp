#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> C(H);
  for (auto &c : C) cin >> c;

  vector<int> X(W);

  rep(j, 0, W) {
    int count = 0;
    rep(i, 0, H) {
      if (C[i][j] == '#') count++;
    }
    X[j] = count;
  }

  rep(i, 0, W) {
    if (i) cout << " ";
    cout << X[i];
  }
  cout << endl;
}
