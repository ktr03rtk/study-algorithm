#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll K, A, B;
  cin >> K >> A >> B;

  if (A + 2 > B) {
    cout << K + 1 << endl;
    return 0;
  }

  ll ans = (K + 1 - A) / 2 * (B - A) + (K + 1 - A) % 2 + A;

  cout << ans << endl;
}