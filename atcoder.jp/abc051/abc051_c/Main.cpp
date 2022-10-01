#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int sx, sy, tx, ty;
  cin >> sx >> sy >> tx >> ty;

  string ans = "";

  rep(i, 0, ty - sy) { ans += "U"; }
  rep(i, 0, tx - sx) { ans += "R"; }
  rep(i, 0, ty - sy) { ans += "D"; }
  rep(i, 0, tx - sx + 1) { ans += "L"; }
  rep(i, 0, ty - sy + 1) { ans += "U"; }
  rep(i, 0, tx - sx + 1) { ans += "R"; }
  ans += "DR";
  rep(i, 0, ty - sy + 1) { ans += "D"; }
  rep(i, 0, tx - sx + 1) { ans += "L"; }
  ans += "U";

  cout << ans << endl;
}
