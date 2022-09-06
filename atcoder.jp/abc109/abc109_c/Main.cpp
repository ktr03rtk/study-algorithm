#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

// 最大公約数 ユークリッドの互除法
int GCD(int A, int B) {
  while (A >= 1 && B >= 1) {
    if (A < B) {
      B = B % A;
    } else {
      A = A % B;
    }
  }
  if (A >= 1) return A;
  return B;
}

int main() {
  int N, X;
  cin >> N >> X;

  vector<int> x(N);
  for (auto &xx : x) cin >> xx;

  int ans = abs(x[0] - X);

  rep(i, 0, N) { ans = GCD(ans, abs(x[i] - X)); }

  cout << ans << endl;
}
