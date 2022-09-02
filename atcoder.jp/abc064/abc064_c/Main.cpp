#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (auto &a : A) cin >> a;

  map<int, bool> m;
  int extra = 0;

  for (auto a : A) {
    if (1 <= a && a < 400) m.insert(make_pair(0, true));
    if (400 <= a && a < 800) m.insert(make_pair(1, true));
    if (800 <= a && a < 1200) m.insert(make_pair(2, true));
    if (1200 <= a && a < 1600) m.insert(make_pair(3, true));
    if (1600 <= a && a < 2000) m.insert(make_pair(4, true));
    if (2000 <= a && a < 2400) m.insert(make_pair(5, true));
    if (2400 <= a && a < 2800) m.insert(make_pair(6, true));
    if (2800 <= a && a < 3200) m.insert(make_pair(7, true));
    if (3200 <= a) extra++;
  }

  int ans = 0;
  for (auto mm : m) {
    ans++;
  }

  cout << max(ans, 1) << " " << ans + extra << endl;
}
