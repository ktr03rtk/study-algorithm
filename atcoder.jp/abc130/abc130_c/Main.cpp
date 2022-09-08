#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int W, H, X, Y;
  cin >> W >> H >> X >> Y;

  double S = 1.0 * W * H / 2;
  int ans = 0;
  if (W == 2 * X && H == 2 * Y) {
    ans = 1;
  }

  cout << fixed << setprecision(10) << S << " " << ans << endl;
}
