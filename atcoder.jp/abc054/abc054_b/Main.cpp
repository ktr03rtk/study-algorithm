#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<string> A(N), B(M);
  for (auto &a : A) cin >> a;
  for (auto &b : B) cin >> b;

  bool ans = false;

  rep(i, 0, N - M + 1) {
    rep(j, 0, N - M + 1) {
      bool pass = true;
      rep(k, 0, M) {
        rep(l, 0, M) {
          if (A[i + k][j + l] != B[k][l]) pass = false;
        }
      }
      if (pass) ans = true;
    }
  }

  cout << (ans ? "Yes" : "No") << endl;
}
