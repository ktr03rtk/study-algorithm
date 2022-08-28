#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  vector<int> V(3);
  for (auto &v : V) cin >> v;

  int odd = 0;
  int even = 0;
  for (auto v : V) {
    if (v % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }

  int ans = 0;

  if (odd == 2) {
    ans++;
    for (auto &v : V) {
      if (v % 2 == 1) v++;
    }
  } else if (even == 2) {
    ans++;
    for (auto &v : V) {
      if (v % 2 == 0) v++;
    }
  }

  sort(V.begin(), V.end(), greater<int>{});

  ans += (V[0] - V[1]) / 2 + (V[0] - V[2]) / 2;

  cout << ans << endl;
}
