#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int K, S;
  cin >> K >> S;

  int ans = 0;
  rep(i, 0, K + 1) {
    rep(j, 0, K + 1) {
      int z = S - i - j;
      if (0 <= z && z <= K) ans++;
    }
  }

  cout << ans << endl;
}
