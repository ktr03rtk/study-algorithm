#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  vector<vector<int>> A(2, vector<int>(N));
  rep(i, 0, 2) {
    rep(j, 0, N) { cin >> A[i][j]; }
  }

  vector<vector<int>> dp(2, vector<int>(N));

  dp[0][0] = A[0][0];

  rep(i, 0, 2) {
    rep(j, 0, N) {
      if (j) dp[i][j] = dp[i][j - 1] + A[i][j];
      if (i) dp[i][j] = max(dp[i - 1][j] + A[i][j], dp[i][j - 1] + A[i][j]);
    }
  }

  cout << dp[1][N - 1] << endl;
}
