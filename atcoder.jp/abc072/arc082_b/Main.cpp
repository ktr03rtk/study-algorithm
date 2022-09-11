#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> P(N);
  for (auto &p : P) cin >> p;

  int ans = 0;
  bool next = false;
  rep(i, 0, N) {
    if (P[i] == i + 1) {
      if (next) {
        next = false;
        continue;
      }
      ans++;
      next = true;
    } else {
      next = false;
    }
  }

  cout << ans << endl;
}
