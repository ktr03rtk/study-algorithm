#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int L, R;
  cin >> L >> R;

  vector<int> A;

  int ans = 1000000000;
  rep(i, L, R) {
    rep(j, i + 1, R + 1) {
      ans = min(ans, ((i % 2019) * (j % 2019)) % 2019);
      if (ans == 0) {
        cout << ans << endl;
        return 0;
      }
    }
  }

  cout << ans << endl;
}
