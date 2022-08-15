#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i <= (int)(n); i++)

using namespace std;

int main() {
  int n, y, a = -1, b = -1, c = -1;
  cin >> n >> y;

  rep(i, n) {
    rep(j, n - i) {
      int total = 10000 * i + 5000 * j + 1000 * (n - i - j);
      if (total == y) {
        a = i;
        b = j, c = (n - i - j);
        goto OUT;
      }
    }
  }
OUT:
  cout << a << " " << b << " " << c << endl;
}
