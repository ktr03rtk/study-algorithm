#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int x, y;
  cin >> x >> y;

  int val = abs(abs(x) - abs(y));

  if ((x >= 0 && y > 0 && x < y) || (x < 0 && y <= 0 && x < y)) {
    cout << val << endl;
  } else if ((x > 0 && y > 0 && x > y) || (x < 0 && y < 0 && x > y)) {
    cout << val + 2 << endl;
  } else {
    cout << val + 1 << endl;
  }
}
