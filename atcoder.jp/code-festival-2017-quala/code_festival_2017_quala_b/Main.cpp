#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, M, K;
  cin >> N >> M >> K;

  bool ans = false;
  rep(i, 0, N + 1) {
    rep(j, 0, M + 1) {
      int val = i * M + j * N - 2 * i * j;
      if (val == K) ans = true;
    }
  }

  cout << (ans ? "Yes" : "No") << endl;
}
