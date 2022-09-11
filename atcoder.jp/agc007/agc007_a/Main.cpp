#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> A(H);
  for (auto &a : A) cin >> a;

  int count = 0;
  rep(i, 0, H) {
    rep(j, 0, W) {
      if (A[i][j] == '#') count++;
    }
  }

  cout << (count == H + W - 1 ? "Possible" : "Impossible") << endl;
}
