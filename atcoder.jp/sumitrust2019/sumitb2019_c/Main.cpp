#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int X;
  cin >> X;

  vector<bool> dp(1000000);
  dp[0] = true;

  rep(i, 0, X) {
    if (dp[i]) {
      rep(j, 0, 6) { dp[i + 100 + j] = true; }
    }
  }

  cout << (dp[X] ? "1" : "0") << endl;
}
