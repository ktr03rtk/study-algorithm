#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N + 1);
  vector<int> B(N + 1, 0);
  for (auto &a : A) cin >> a;
  for (auto &b : B) cin >> b;

  vector<int> dp(N + 1);
  int val = 0;

  rep(i, 0, N + 2) {
    dp[i] = min(A[i], val + B[i]);
    val = min(B[i], max(0, B[i] - A[i] + val));
  }

  ll ans = 0;
  for (auto d : dp) ans += d;

  cout << ans << endl;
}
