#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> t(n + 1), x(n + 1), y(n + 1);

  t[0] = x[0] = y[0] = 0;

  rep(i, n) { cin >> t[i + 1] >> x[i + 1] >> y[i + 1]; }

  bool result = true;
  rep(i, n) {
    int dt = t[i + 1] - t[i];
    int distance = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
    if ((dt < distance) || (distance % 2 != dt % 2)) {
      result = false;
    }
  }

  cout << (result ? "Yes" : "No") << endl;
}
