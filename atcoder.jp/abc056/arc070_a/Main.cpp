#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int X;
  cin >> X;

  rep(i, 1, X + 1) {
    if (i * (i + 1) / 2 >= X) {
      cout << i << endl;
      return 0;
    }
  }
}
