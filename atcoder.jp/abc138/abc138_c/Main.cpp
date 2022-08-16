#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;

  vector<int> v(n);

  rep(i, 0, n) { cin >> v[i]; }
  sort(v.begin(), v.end());

  double ans = v[0];

  rep(i, 1, n) { ans = (ans + v[i]) / 2; }

  printf("%.10f\n", ans);
}
