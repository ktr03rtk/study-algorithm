#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int X, Y, Z;
  cin >> X >> Y >> Z;

  if (X * Y < 0) {
    cout << abs(X) << endl;
    return 0;
  }

  if (abs(X) < abs(Y)) {
    cout << abs(X) << endl;
    return 0;
  }

  if (Y * Z < 0) {
    cout << 2 * abs(Z) + abs(X) << endl;
    return 0;
  }

  if (abs(Z) < abs(Y)) {
    cout << abs(X) << endl;
    return 0;
  }

  cout << -1 << endl;
}
