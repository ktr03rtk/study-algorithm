#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll X, K;
  cin >> X >> K;

  rep(i, 1, K + 1) {
    ll y = X % (ll)pow(10, i);
    X -= y;
    if (y >= 5 * (ll)pow(10, i - 1)) {
      X += (ll)pow(10, i);
    }
  }

  cout << X << endl;
}
