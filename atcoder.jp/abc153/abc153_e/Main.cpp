#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

int main() {
  int H, N;
  cin >> H >> N;
  vector<int> A(N), B(N);
  rep(i, 0, N) { cin >> A[i] >> B[i]; }

  vector<vector<ll>> dp(N + 1, vector<ll>(H + 1, INF));
  dp[0][0] = 0;
  rep(i, 0, N) {
    rep(j, 0, H + 1) {
      dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
      dp[i + 1][min(j + A[i], H)] =
          min(dp[i + 1][min(j + A[i], H)], dp[i + 1][j] + B[i]);
    }
  }

  cout << dp[N][H] << endl;
}
