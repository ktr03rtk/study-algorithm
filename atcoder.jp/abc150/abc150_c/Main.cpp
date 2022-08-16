#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;

  vector<int> p(n);
  vector<int> q(n);
  rep(i, 0, n) { cin >> p[i]; }
  rep(i, 0, n) { cin >> q[i]; }

  vector<int> v(n);
  rep(i, 0, n) { v[i] = i + 1; }

  int idx = 0, a = -1, b = -1;

  do {
    bool ok = true;
    rep(i, 0, n) {
      if (v[i] != p[i]) {
        ok = false;
      }
    }
    if (ok) {
      a = idx;
    }

    ok = true;
    rep(i, 0, n) {
      if (v[i] != q[i]) {
        ok = false;
      }
    }
    if (ok) {
      b = idx;
    }

    idx++;
  } while (next_permutation(v.begin(), v.end()));

  cout << abs(a - b) << endl;
}
