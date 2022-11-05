#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

// 小数点
int main() {
  double a, b, x;
  cin >> a >> b >> x;

  double volume = a * a * b;
  double ans = 0;
  if (x < volume / 2) {
    ans = atan(a * b * b / (2.0 * x));
  } else {
    ans = atan((2.0 * b - 2.0 * x / (a * a)) / a);
  }

  cout << fixed << setprecision(10) << ans / M_PI * 180 << endl;
}
