#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, X, Y;
  cin >> N >> X >> Y;
  X--;
  Y--;

  vector<int> D(N, 0);
  rep(i, 0, N - 1) {
    rep(j, i + 1, N) {
      int k = 1000000000;
      k = min(k, j - i);
      k = min(k, abs(X - i) + abs(Y - j) + 1);
      D[k]++;
    }
  }

  rep(i, 1, N) { cout << D[i] << endl; }
}
