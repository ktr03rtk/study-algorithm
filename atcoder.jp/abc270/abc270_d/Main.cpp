#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (auto &a : A) cin >> a;

  vector<int> dp(N + 1, 0);

  rep(i, 1, N + 1) {
    rep(j, 0, K) {
      if (A[j] > i) break;
      dp[i] = max(dp[i], i - dp[i - A[j]]);
    }
  }

  cout << dp[N] << endl;
}
