#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;
  int N = S.size();

  // 動的計画法
  // 幅優先探索、メモ化
  vector<bool> dp(N + 1, false);
  dp[0] = true;

  rep(i, 0, N + 1) {
    if (i >= 5 && dp[i - 5] && S.substr(i - 5, 5) == "erase") {
      dp[i] == true;
    }
    if (i >= 6 && dp[i - 6] && S.substr(i - 6, 6) == "eraser") {
      dp[i] == true;
    }
    if (i >= 5 && dp[i - 5] && S.substr(i - 5, 5) == "dream") {
      dp[i] == true;
    }
    if (i >= 6 && dp[i - 7] && S.substr(i - 7, 7) == "dreamer") {
      dp[i] == true;
    }

    if (dp[N]) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
