#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int x;
  cin >> x;

  int ans = x;

  while (true) {
    bool divided = false;

    rep(i, 2, ans) {
      if (ans % i == 0) {
        ans++;
        divided = true;
      }
    }

    if (!divided) {
      break;
    }
  }

  cout << ans << endl;
}
