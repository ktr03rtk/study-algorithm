#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll X, Y;
  cin >> X >> Y;

  int count = 1;
  ll a = X;

  while (true) {
    if (2 * a <= Y) {
      count++;
      a *= 2;
    } else {
      break;
    }
  }

  cout << count << endl;
}
