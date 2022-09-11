#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll a, b, c;

  cin >> a >> b >> c;

  ll d = c - a - b;
  if (d > 0 && d * d > 4 * a * b) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
