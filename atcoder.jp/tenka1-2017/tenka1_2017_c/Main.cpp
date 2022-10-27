#include <bits/stdc++.h>
using ll = long long;

#define rep(i, j, n) for (ll i = j; i < (ll)(n); i++)

using namespace std;

int main() {
  ll N;
  cin >> N;

  rep(h, 1, 3501) {
    rep(n, 1, 3501) {
      if ((4 * h * n - N * n - N * h) != 0 && (N * h * n) % (4 * h * n - N * n - N * h) == 0 && (N * h * n) / (4 * h * n - N * n - N * h) > 0) {
        cout << h << " " << n << " " << (N * h * n) / (4 * h * n - N * n - N * h) << endl;
        return 0;
      }
    }
  }
}
