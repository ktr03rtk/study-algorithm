#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N, M;
  cin >> N >> M;

  vector<ll> A(M + 2);
  A[0] = 0;
  A[M + 1] = 0;
  rep(i, 1, M + 1) cin >> A[i], A[i]++;

  vector<ll> dp(N + 2, 0);
  dp[0] = 0;
  dp[1] = 1;

  ll count = 1;
  rep(i, 1, N + 1) {
    if (i + 1 == A[count]) {
      dp[i + 1] = 0;
      count++;
      continue;
    }

    dp[i + 1] = (dp[i] + dp[i - 1]) % 1000000007;
  }

  cout << dp[N + 1] << endl;
}
