#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  const int N = 5;
  vector<int> vals(N);
  rep(i, 0, N) { cin >> vals[i]; }

  int ans = 0, min_val = 200;

  for (auto v : vals) {
    if (v % 10 != 0) {
      ans += 10 - (v % 10);
      min_val = min(min_val, v % 10);
    }
    ans += v;
  }

  if (min_val != 200) {
    ans += min_val - 10;
  }
  cout << ans << endl;
}
